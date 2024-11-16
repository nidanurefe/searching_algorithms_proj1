#include "tweet.h"


std::vector<Tweet> readTweetsFromFile(const std::string& filename) 
{
    // Declare necessary variables: ifstream object, vector to store tweets and string to store each line
    std::ifstream source;
    std::vector<Tweet> tweets; 
    std::string line; 

    source.open(filename); //Open the file

    if (source.is_open()) //Check if source is opened
    {
        std::getline(source, line); //Skip the headlines of the file
        while (std::getline(source, line)) //Read the file line by line
        {
            std::stringstream ss(line); //Create a stringstream object
            Tweet tweet; //Create an empty tweet object
            std::string temp; //Variable to store the tweetID, retweetCount, and favoriteCount temporarily

            std::getline(ss, temp, ','); //Read the line until the first comma and save it into temp
            tweet.tweetID = std::stoi(temp); //Convert the temp string to int and save it into tweetID

            std::getline(ss, temp, ','); //Read the line until the second comma and save it into temp
            tweet.retweetCount = std::stoi(temp); //Convert the temp string to int and save it into retweetCount

            std::getline(ss, temp, ','); //Read remaining line and save it into temp
            tweet.favoriteCount = std::stoi(temp); //Convert the temp string to int and save it into favoriteCount

            tweets.push_back(tweet); //Add the tweet object to the tweets vector
        }
        source.close(); //Close the file
    }
    else
    {
        std::cout << "Unable to open file" << std::endl; //Print error message if file is not opened
    }
    return tweets; //Return the tweets vector
}

void writeTweetsToFile(const std::string& filename, const std::vector<Tweet>& tweets) 
{
    std::ofstream destination; //Declare an empty ofstream object to write tweets into 
    destination.open(filename); //Open the file

    if (destination.is_open()) //Check if the file is opened
    {
        destination << "tweetID, retweetCount, favoriteCount" << std::endl; //Write the header to the file
        for (const Tweet& tweet : tweets) //Iterate through the tweets vector
        {
            destination << tweet.tweetID << "," << tweet.retweetCount << "," << tweet.favoriteCount << std::endl; //Write the tweetID, retweetCount, and favoriteCount to the file
        }
        destination.close(); //Close the file
    }
    else
    {
        std::cout << "Unable to open file" << std::endl; //Print error message if file is not opened
    }
}