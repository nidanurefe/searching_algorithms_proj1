#include "tweet.h"
#include <chrono> // Include the chrono header file to measure time

int main() 
{

    // Save the tweets from the files into vectors
    std::vector<Tweet> tweets5k = readTweetsFromFile("data/sizes/tweets5k.csv");
    std::vector<Tweet> tweets10k = readTweetsFromFile("data/sizes/tweets10k.csv");
    std::vector<Tweet> tweets20k = readTweetsFromFile("data/sizes/tweets20k.csv");
    std::vector<Tweet> tweets30k = readTweetsFromFile("data/sizes/tweets30k.csv");
    std::vector<Tweet> tweets50k = readTweetsFromFile("data/sizes/tweets50k.csv");
    std::vector<Tweet> tweets = readTweetsFromFile("data/permutations/tweets.csv");
    std::vector<Tweet> tweetsNS = readTweetsFromFile("data/permutations/tweetsNS.csv");
    std::vector<Tweet> tweetsSA = readTweetsFromFile("data/permutations/tweetsSA.csv");
    std::vector<Tweet> tweetsSD = readTweetsFromFile("data/permutations/tweetsSD.csv");


    // Define the start, end and duration variables to measure time.
    auto start = std::chrono::high_resolution_clock::now();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration;


    // RUN THIS SECTION OF CODE TO MEASURE BUBBLE SORT

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets5k, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for 5k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets10k, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for 10k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets20k, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for 20k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets30k, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for 30k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets50k, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for 50k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweets, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for tweets: " << duration.count() << " seconds" << std::endl;


    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweetsNS, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for tweetsNS: " << duration.count() << " seconds" << std::endl;


    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweetsSA, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for tweetsSA: " << duration.count() << " seconds" << std::endl;


    // start = std::chrono::high_resolution_clock::now();
    // bubbleSort(tweetsSD, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Bubble sort duration for tweetsSD: " << duration.count() << " seconds" << std::endl;



   // ************************************************************

    


    // RUN THIS SECTION OF CODE TO MEASURE INSERTION SORT
    /*
    
    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets5k, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for 5k tweets: " << duration.count() << " seconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets10k, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for 10k tweets: " << duration.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets20k, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for 20k tweets: " << duration.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets30k, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for 30k tweets: " << duration.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets50k, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for 50k tweets: " << duration.count() << " seconds" << std::endl;
    

    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweets, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for tweets: " << duration.count() << " seconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweetsNS, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for tweetsNS: " << duration.count() << " seconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweetsSA, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for tweetsSA: " << duration.count() << " seconds" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    insertionSort(tweetsSD, "retweetCount", true);
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Insertion sort duration for tweetsSD: " << duration.count() << " seconds" << std::endl;
    
    */
    
   

    // ************************************************************


    // RUN THIS SECTION OF CODE TO MEASURE MERGE SORT
    

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets5k, 0, 4999, "tweetID", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 5k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets5k, 0, 4999, "tweetID", false);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 5k tweets in descending order:  " << duration.count() << " seconds" << std::endl;


    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets10k, 0, 9999, "tweetID", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 10k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets10k, 0, 9999, "tweetID", false);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 10k tweets in descending order: " << duration.count() << " seconds" << std::endl;


    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets20k, 0, 19999, "tweetID", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 20k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets20k, 0, 19999, "tweetID", false);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 20k tweets in descending order: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets30k, 0, 29999, "tweetID", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 30k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets30k, 0, 29999, "tweetID", false);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 30k tweets in descending order: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets50k, 0, 49999, "tweetID", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 50k tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets50k, 0, 49999, "tweetID", false);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for 50k tweets in descending order: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweets, 0, 49999, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double>duration = end - start;
    // std::cout << "Merge sort duration for tweets: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweetsSA, 0, 49999, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for tweetsSA: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweetsSD, 0, 49999, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for tweetsSD: " << duration.count() << " seconds" << std::endl;

    // start = std::chrono::high_resolution_clock::now();
    // mergeSort(tweetsNS, 0, 49999, "retweetCount", true);
    // end = std::chrono::high_resolution_clock::now();
    // duration = end - start;
    // std::cout << "Merge sort duration for tweetsNS: " << duration.count() << " seconds" << std::endl;   

    
    // ************************************************************


    // RUN THIS SECTION OF CODE TO MEASURE BINARY SEARCH 

    /*


  
  
    int index; 

    start = std::chrono::high_resolution_clock::now();
    index = binarySearch(tweets5k, 1773335, "tweetID");
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Index of 1773335 in tweets5k: " << index << std::endl;
    std::cout << "Binary search duration for 5k tweets: " << duration.count()<< " seconds" << std::endl;
    std::cout << "--------------------------------" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    index = binarySearch(tweets10k, 1773335, "tweetID");
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Index of 1773335 in tweets10k: " << index << std::endl;
    std::cout << "Binary search duration for 10k tweets: " << duration.count()<< " seconds" << std::endl;
    std::cout << "--------------------------------" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    index = binarySearch(tweets20k, 1773335, "tweetID");
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Index of 1773335 in tweets20k: " << index << std::endl;
    std::cout << "Binary search duration for 20k tweets: " << duration.count()<< " seconds" << std::endl;
    std::cout << "--------------------------------" << std::endl;


    start = std::chrono::high_resolution_clock::now();
    index = binarySearch(tweets30k, 1773335, "tweetID");
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Index of 1773335 in tweets30k: " << index << std::endl;
    std::cout << "Binary search duration for 30k tweets: " << duration.count()<< " seconds" << std::endl;
    std::cout << "--------------------------------" << std::endl;



    start = std::chrono::high_resolution_clock::now();
    index = binarySearch(tweets50k, 1773335, "tweetID");
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Index of 1773335 in tweets50k: " << index << std::endl;
    std::cout << "Binary search duration for 50k tweets: " << duration.count()<< " seconds" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    */
 

    // ************************************************************


    // RUN THIS SECTION OF CODE TO MEASURE COUNT ABOVE THRESHOLD

    /*

    int num = 0;


    start = std::chrono::high_resolution_clock::now();
    num = countAboveThreshold(tweets5k,"favoriteCount", 250 );
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Count above threshold duration for 5k tweets: " << duration.count() << " seconds" << std::endl;
    std::cout << "The number of tweets above threshold is: " << num << std::endl;
    std::cout << "--------------------------------" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    num = countAboveThreshold(tweets10k,"favoriteCount", 250 );
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Count above threshold duration for 10k tweets: " << duration.count() << " seconds" << std::endl;
    std::cout << "The number of tweets above threshold is: " << num << std::endl;
    std::cout << "--------------------------------" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    num = countAboveThreshold(tweets20k,"favoriteCount", 250 );
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Count above threshold duration for 20k tweets: " << duration.count() << " seconds" << std::endl;
    std::cout << "The number of tweets above threshold is: " << num << std::endl;
    std::cout << "--------------------------------" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    num = countAboveThreshold(tweets30k,"favoriteCount", 250 );
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Count above threshold duration for 30k tweets: " << duration.count() << " seconds" << std::endl;
    std::cout << "The number of tweets above threshold is: " << num << std::endl;
    std::cout << "--------------------------------" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    num = countAboveThreshold(tweets50k,"favoriteCount", 250 );
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Count above threshold duration for 50k tweets: " << duration.count() << " seconds" << std::endl;
    std::cout << "The number of tweets above threshold is: " << num << std::endl;
    std::cout << "--------------------------------" << std::endl;


    */

   
    return 0;

}
