#include "tweet.h"
#include <climits> // Include the limits header file to use INT_MAX in merge function 

void bubbleSort(std::vector<Tweet>& tweets, const std::string& sortBy, bool ascending) 
{
    if(sortBy != "retweetCount" && sortBy != "favoriteCount" && sortBy != "tweetID" ) //Check if the sortBy parameter is valid or not
    {
        std::cout << "Invalid sortBy parameter" << std::endl; //Print an error message if parameter is invalid
        return; //Exit the function
    }
        
        int n = tweets.size(); //Get the size of the tweets vector

        for(int i = 0; i<n-1; i++) //Iterate through the tweets vector
        {
            for(int j = 0; j<n-i-1; j++) //Iterate through the tweets vector
            {
                //Sort by retweetCount
                if(sortBy == "retweetCount") 
                {
                    // If ascending, check if the current tweet is greater than the next tweet and vice versa in descending
                    if(ascending ? tweets[j].retweetCount > tweets[j+1].retweetCount : tweets[j].retweetCount < tweets[j+1].retweetCount) 
                    {
                        // Swap
                        Tweet temp = tweets[j]; //Store the current tweet in a temporary variable
                        tweets[j] = tweets[j+1]; //Swap the current tweet with the next tweet
                        tweets[j+1] = temp; //Swap the next tweet with the current tweet
                    }
                }
                //Sort by favoriteCount
                else if(sortBy == "favoriteCount")
                {
                    // If ascending, check if the current tweet is greater than the next tweet and vice versa in descending
                    if(ascending ? tweets[j].favoriteCount > tweets[j+1].favoriteCount : tweets[j].favoriteCount < tweets[j+1].favoriteCount) 
                    {
                        // Swap
                        Tweet temp = tweets[j]; //Store the current tweet in a temporary variable
                        tweets[j] = tweets[j+1]; //Swap the current tweet with the next tweet
                        tweets[j+1] = temp; //Swap the next tweet with the current tweet
                    }
                }
                //Sort by tweetID
                else if(sortBy == "tweetID") 
                {
                    // If ascending, check if the current tweet is greater than the next tweet and vice versa in descending
                    if(ascending ? tweets[j].tweetID > tweets[j+1].tweetID : tweets[j].tweetID < tweets[j+1].tweetID) 
                    {
                        // Swap
                        Tweet temp = tweets[j]; //Store the current tweet in a temporary variable
                        tweets[j] = tweets[j+1]; //Swap the current tweet with the next tweet
                        tweets[j+1] = temp; //Swap the next tweet with the current tweet
                    }
            }
        }
    }
}

void insertionSort(std::vector<Tweet>& tweets, const std::string& sortBy, bool ascending){
    if(sortBy != "retweetCount" && sortBy != "favoriteCount" && sortBy != "tweetID" ) //Check if the sortBy parameter is valid or not
    {
        std::cout << "Invalid sortBy parameter" << std::endl; //Print an error message if parameter is invalid
        return; //Exit the function
    }
    
    int n = tweets.size(); //Get the size of the tweets vector
    for(int i = 1; i<n; i++) //Iterate through the tweets vector starting from the second element
    {
        Tweet key = tweets[i]; //Get the current tweet
        int j = i - 1; //Get the index of the previous tweet

        //Sort by retweetCount
        if(sortBy == "retweetCount") { 
            //If ascending, check if the previous tweet is greater than the current tweet, vice versa in descending
            while(j >= 0 && (ascending ? tweets[j].retweetCount > key.retweetCount : tweets[j].retweetCount < key.retweetCount)) 
            {
                tweets[j + 1] = tweets[j]; //Swap the previous tweet with the current tweet
                j = j - 1; //Move to the next previous tweet
            }
            tweets[j + 1] = key; //Insert the current tweet into the correct position
        }
        //Sort by favoriteCount
        else if(sortBy == "favoriteCount") { 
            while(j >= 0 && (ascending ? tweets[j].favoriteCount > key.favoriteCount : tweets[j].favoriteCount < key.favoriteCount)) //Check if the previous tweet is greater than the current tweet
            {
                tweets[j + 1] = tweets[j]; //Swap the previous tweet with the current tweet
                j = j - 1; //Move to the next previous tweet
            }
            tweets[j + 1] = key; //Insert the current tweet into the correct position
        }
        //Sort by tweetID
        else if(sortBy == "tweetID") { 
            while(j >= 0 && (ascending ? tweets[j].tweetID > key.tweetID : tweets[j].tweetID < key.tweetID)) //Check if the previous tweet is greater than the current tweet
            {
                tweets[j + 1] = tweets[j]; //Swap the previous tweet with the current tweet
                j = j - 1; //Move to the next previous tweet
            }
            tweets[j + 1] = key; //Insert the current tweet into the correct position
        }
    }
}

void merge(std::vector<Tweet>& tweets, int left, int mid, int right, const std::string& sortBy, bool ascending) 
{
    if(sortBy != "retweetCount" && sortBy != "favoriteCount" && sortBy != "tweetID" ) //Check if the sortBy parameter is valid or not
    {
        std::cout << "Invalid sortBy parameter" << std::endl; //Print an error message if parameter is invalid
        return; //Exit the function
    }
    int n1 = mid - left + 1; //Get the size of the left subarray
    int n2 = right - mid; //Get the size of the right subarray

    std::vector<Tweet> L(n1+1); //Declare a vector to store the left subarray
    std::vector<Tweet> R(n2+1); //Declare a vector to store the right subarray

    if (sortBy == "favoriteCount") { //Sort by favoriteCount
        for(int i = 0; i<n1; i++){ //Iterate through the left subarray
            L[i] = tweets[left + i]; //Store the left subarray into L vector
        }
        for(int j = 0; j<n2; j++){ //Iterate through the right subarray
            R[j] = tweets[mid + 1 + j]; //Store the right subarray into R vector
        }

        L[n1].favoriteCount = INT_MAX; //Set the last element of L vector to infinity
        R[n2].favoriteCount = INT_MAX; //Set the last element of R vector to infinity

        int i = 0, j = 0; //Initialize the indices of the left and right subarrays
        int k = left; //Initialize the index of the merged array

        while(i<n1 && j<n2) { //Merge the left and right subarrays
            if(ascending){
                if(L[i].favoriteCount <= R[j].favoriteCount){ //Check if the left subarray element is less than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is less than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            } else{
                if(L[i].favoriteCount >= R[j].favoriteCount){ //Check if the left subarray element is greater than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is greater than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            }
            
            k++; //Move to the next element of the merged array
        }

        while (i < n1) { //Check if there are any remaining elements in the left subarray
            tweets[k] = L[i]; //Merge the remaining elements of the left subarray
            i++; //Move to the next element of the left subarray
            k++; //Move to the next element of the merged array
        }

        while (j < n2) {  //Check if there are any remaining elements in the right subarray
            tweets[k] = R[j]; //Merge the remaining elements of the right subarray
            j++;  //Move to the next element of the right subarray
            k++; //Move to the next element of the merged array
        }
    } else if(sortBy == "retweetCount"){ //Sort by retweetCount
        for(int i = 0; i<n1; i++){ //Iterate through the left subarray
            L[i] = tweets[left + i]; //Store the left subarray into L vector
        }
        for(int j = 0; j<n2; j++){ //Iterate through the right subarray
            R[j] = tweets[mid + 1 + j]; //Store the right subarray into R vector
        }

        L[n1].retweetCount = INT_MAX; //Set the last element of L vector to infinity
        R[n2].retweetCount = INT_MAX; //Set the last element of R vector to infinity

        int i = 0, j = 0; //Initialize the indices of the left and right subarrays
        int k = left; //Initialize the index of the merged array

        while(i<n1 && j<n2) { //Merge the left and right subarrays
            if(ascending){
                if(L[i].retweetCount <= R[j].retweetCount){ //Check if the left subarray element is less than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is less than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            } else{
                if(L[i].retweetCount >= R[j].retweetCount){ //Check if the left subarray element is greater than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is greater than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            }
        }

        while (i < n1) { //Check if there are any remaining elements in the left subarray
            tweets[k].retweetCount = L[i].retweetCount; //Merge the remaining elements of the left subarray
            i++; //Move to the next element of the left subarray
            k++; //Move to the next element of the merged array
        }

        while (j < n2) { //Check if there are any remaining elements in the right subarray
            tweets[k].retweetCount = R[j].retweetCount; //Merge the remaining elements of the right subarray
            j++; //Move to the next element of the right subarray
            k++; //Move to the next element of the merged array
        }

    }
    else if(sortBy == "tweetID"){ //Sort by tweetID
        for(int i = 0; i<n1; i++){ //Iterate through the left subarray
            L[i] = tweets[left + i]; //Store the left subarray into L vector
        }
        for(int j = 0; j<n2; j++){ //Iterate through the right subarray
            R[j] = tweets[mid + 1 + j]; //Store the right subarray into R vector
        }

        L[n1].tweetID = INT_MAX; //Set the last element of L vector to infinity
        R[n2].tweetID = INT_MAX; //Set the last element of R vector to infinity

        int i = 0, j = 0; //Initialize the indices of the left and right subarrays
        int k = left; //Initialize the index of the merged array

        while(i<n1 && j<n2) { //Merge the left and right subarrays
           if(ascending){
                if(L[i].tweetID <= R[j].tweetID){ //Check if the left subarray element is less than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is less than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            } else{
                if(L[i].tweetID >= R[j].tweetID){ //Check if the left subarray element is greater than or equal to the right subarray element
                    tweets[k] = L[i]; //Merge the left subarray
                    i++; //Move to the next element of the left subarray
                } else { // Check if the right subarray element is greater than the left subarray element
                    tweets[k] = R[j]; //Merge the right subarray
                    j++;  //Move to the next element of the right subarray
                }
            }
            k++; //Move to the next element of the merged array
        }

        while (i < n1) { //Check if there are any remaining elements in the left subarray
            tweets[k] = L[i]; //Merge the remaining elements of the left subarray
            i++; //Move to the next element of the left subarray
            k++; //Move to the next element of the merged array
        }

        while (j < n2) { //Check if there are any remaining elements in the right subarray
            tweets[k] = R[j]; //Merge the remaining elements of the right subarray
            j++; //Move to the next element of the right subarray
            k++; //Move to the next element of the merged array
        }

    }

}

void mergeSort(std::vector<Tweet>& tweets, int left, int right, const std::string& sortBy, bool ascending) 
{
    if(sortBy != "retweetCount" && sortBy != "favoriteCount" && sortBy != "tweetID" ) //Check if the sortBy parameter is valid or not
    {
        std::cout << "Invalid sortBy parameter" << std::endl; //Print an error message if parameter is invalid
        return; //Exit the function
    }
    if(left < right) //Check if the left index is less than the right index
    {
        int mid = left + (right - left) / 2; //Calculate the middle index
        mergeSort(tweets, left, mid, sortBy, ascending); //Sort the left subarray
        mergeSort(tweets, mid + 1, right, sortBy, ascending); //Sort the right subarray
        merge(tweets, left, mid, right, sortBy, ascending); //Merge the sorted subarrays
    }

}