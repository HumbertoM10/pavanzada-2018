# Kata 0
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

In order to solve this problem it is necessary to use a search algorithm that has constant time when searching, that is why I decided that a hash table would fit perfect to solve this problem. 
First, we insert the array of integers in the hash table O(n).
Then, we take the first number and look up for their complementary number to get the desire sum and so on whit all the numbers O(n).
Finally, when the algorithm finds a match it returns the two numbers that solve the problem.