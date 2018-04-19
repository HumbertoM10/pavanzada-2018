# Kata 8
-Problem

You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

    Assume your users will watch exactly two movies
    Don't make your users watch the same movie twice
    Optimize for runtime over memory

-----------------------------------------------------------------------------------------------------
-Solution
First we ask for the fligth length (store it in an int called f_length) and the list of movies lenghts' (stored it in a list  called movie_list)  
  
Then save in a hash table called movies_hash the list of movies (stored in movie_list) with the following logic:  
----<Key, Value> (Where the key is the length of the movie in minutes and value is the position of the movie in the list)  
  
Once having this setup whe create a for loop that goes from 0 to n-1 (where n is the number of elements in the list)  
----Inside the loop we check  for every movie in the list if another movie in movies_hash sums the f_length and if it does we return true (1).  
  
Finally if the return statement is not reached inside the for loop we return false (0).  
  
This algorithm has a runtime of O(n);  
  
--------------------------------------------------------------------------------------------
-Sample code

int moviesToWatch(int f_length, int *movie_list){
	hash movies_hash;
	//insert the movie_list inside movies_hash
	for(int i=0; i<movie_list.length; i++){
		int movie=hashGet(f_length-movie_list[i]);
		if(movie!=NULL && movie!=i){
			return 1;
		}
	}
	return 0;
}