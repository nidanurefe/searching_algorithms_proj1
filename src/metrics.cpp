#include "tweet.h"

int binarySearch(const std::vector<Tweet>& tweets, long long key, const std::string& sortBy)
{
    int left = 0; //Declare a variable to store the left index
    int right = tweets.size() - 1; //Declare a variable to store the right index

    if(sortBy != "tweetID" && sortBy != "retweetCount" && sortBy != "favoriteCount") //Check if sortBy parameter is invalid
    {
        std::cout << "Invalid sortBy parameter" << std::endl; //Print an error message if parameter is invalid
        return -1; //Return -1
    }

    while (left <= right)  //Iterate until left index is less than or equal to right index
    {
        int mid = left + (right - left) / 2; //Calculate the middle index
        //Check if sortBy is tweetID
        if (sortBy == "tweetID")  
        {
            if (tweets[mid].tweetID == key)   //Check if the middle element is equal to the key
            {
                return mid; //Return the index of the middle element
            }
            else if (tweets[mid].tweetID < key)  //Check if the middle element is less than the key
            {
                left = mid + 1; //Update the left index
            }
            else  //If the middle element is greater than the key
            {
                right = mid - 1; //Update the right index
            }
        }
        // Check if sort by retweetCount
        else if (sortBy == "retweetCount")  
        {
            if (tweets[mid].retweetCount == key)  // Check if the middle element is equal to the key
            {
                return mid; // Return the index of the middle element
            }
            else if(tweets[mid].retweetCount < key)  // Check if the middle element is less than the key
            {
                left = mid + 1; // Update the left index
            } 
            else  // If the middle element is greater than the key
            {
                right = mid - 1; // Update the right index
            }
        }
        // Check if sort by favoriteCount
        else if (sortBy == "favoriteCount")  
        {
            if (tweets[mid].favoriteCount == key)  // Check if the middle element is equal to the key
            {
                return mid; // Return the index of the middle element
            }
            else if(tweets[mid].favoriteCount < key)  // Check if the middle element is less than the key
            {
                left = mid + 1; // Update the left index
            }
            else  // If the middle element is greater than the key
            {
                right = mid - 1; // Update the right index
            }
        }
    }
    return -1; // Return -1 if the key is not found
}


int countAboveThreshold(const std::vector<Tweet>& tweets, const std::string& metric, int threshold) 
{
    int count = 0; //Declare a variable to store the count of tweets above threshold

    if(metric != "retweetCount" && metric != "favoriteCount" && metric != "tweetID") //Check if metric parameter is invalid
    {
        std::cout << "Invalid metric parameter" << std::endl; //Print an error message if parameter is invalid
        return -1; //Return -1
    }
    
    for (const Tweet& tweet : tweets) //Iterate through the tweets vector
    {
        if (metric == "retweetCount") //Check if metric is retweetCount
        {
            if (tweet.retweetCount > threshold) //Check if retweetCount is above threshold
            {
                count++; //Increment the count
            }
        }
        else if (metric == "favoriteCount") //Check if metric is favoriteCount
        {
            if (tweet.favoriteCount > threshold) //Check if favoriteCount is above threshold
            {
                count++; //Increment the count
            }
        }
        else if (metric == "tweetID") //Check if metric is tweetID
        {
            if (tweet.tweetID > threshold) //Check if tweetID is above threshold
            {
                count++; //Increment the count
            }
        }
    }
    return count; //Return the count of tweets above threshold
}
