## Contains Duplicate 
### Problem Statement
Given an integer array nums, determine if any value appears at least twice in the array, returning true if duplicates exist and false if all elements are distinct.
### Solution
The provided C++ code defines a Solution class with a function containsDuplicate that checks for duplicates in the input array using an unordered map to store the count of each element. The time complexity is O(n), and the space complexity is O(n).

## Two Sum 
### Problem Statement
Given an array of integers nums and an integer target, find two numbers in the array that sum up to the target and return their indices. Assume that there is exactly one solution and the same element is not used twice.
### Solution
The provided C++ code defines a Solution class with a function twoSum that uses a hash map to store previously seen numbers and their indices. The algorithm achieves O(n^2) time complexity and O(1) space complexity.


## Best Time to Buy and Sell Stock
### Problem Statement
You are given an array prices where prices[i] is the price of a given stock on the ith day. The goal is to maximize profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. If no profit can be achieved, return 0.
### Solution
The provided C++ code defines a Solution class with a maxProfit function. This algorithm efficiently calculates the maximum profit that can be achieved by iterating through the given stock prices array. It keeps track of the maximum profit and the minimum price seen so far while traversing the array. The algorithm achieves a time complexity of O(n) and a space complexity of O(1), where n is the size of the input prices array.


## Valid Anagram 
### Problem Statement

### Solution
The anagram-checking approach involves comparing character counts in strings s and t. If lengths differ, they aren't anagrams. Initialize a hash map to track character occurrences, update counts during linear iteration, and check for equality. Time complexity is O(n), space complexity is O(1) for lowercase English letters. For Unicode, adapt using a hash map or array, maintaining O(n) time and O(k) space, where k is the character set size.


## Valid Parentheses 
### Problem Statement
Given a string s containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every closing bracket has a corresponding open bracket of the same type.

### Solution
The challenge at hand involves determining the validity of a given string of parentheses based on specific rules: ensuring that open brackets are closed by the same type of brackets, closed in the correct order, and that every closing bracket has a corresponding open bracket of the same type. To address this, the provided C++ code employs a stack-based approach. In terms of time complexity, the solution operates in O(n) time, where n represents the length of the input string, and in O(n) space complexity. This algorithm adeptly validates the input string for valid parentheses, adhering to the prescribed rules and efficiently utilizing a stack-based strategy.


## Maximum Subarray Sum 
### Problem Statement
Given an integer array nums, find the contiguous subarray with the largest sum and return the sum of that subarray.

### Solution 
Initialize two variables, currSubArr_sum and maxSubArr_sum, to the first element of the input array. Then, iterate through the array starting from the second element. For each element, calculate the current subarray sum by selecting the maximum value between the current element and the sum of the previous subarray plus the current element. Update the maximum subarray sum by choosing the maximum between the previous maximum subarray sum and the current subarray sum. Finally, return the maximum subarray sum. In terms of time complexity, this solution operates in O(n), where n represents the size of the input vector nums. The space complexity is O(1), indicating constant space usage.


## Product of Array Except Self 
### Problem Statement
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.
### Solution
The algorithm can be implemented using two passes through the input array. The first pass calculates the product of all elements to the left of each element, and the second pass calculates the product of all elements to the right of each element. The final result is the product of the left and right products for each element. The time complexity of this algorithm is O(N) and the space complexity is O(1) excluding the output array, or O(N) including the output array.


## 3Sum 
### Problem Statement
Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.
Notice that the solution set must not contain duplicate triplets.
## Solution
To efficiently find triplets in an input array that sum to zero, follow these steps: first, sort the array, aiding in the subsequent search. Iterate through the sorted array, treating each element as a potential initial element of the triplet. Utilize the two pointers technique, employing left and right pointers for the remaining elements. Adjust the pointers according to the triplet's sum, striving for a sum of zero. To prevent duplicate triplets, utilize a set. Finally, convert the set of unique triplets into a vector for the result. In terms of complexity, the time complexity is O(n log n) due to sorting, and the overall time complexity remains O(n log n). The space complexity is O(n^2) considering the output vector and set, as it accounts for the potential O(n^2) triplets and the set used for storage.


## Merge Intervals 
### Problem Statement
You are given a list of intervals, where each interval is represented by a pair of integers [start, end]. Your task is to merge overlapping intervals and return a list of non-overlapping intervals.
### Solution
To address the given problem, the approach involves sorting intervals based on their start times and subsequently iterating through the sorted intervals to merge overlapping ones. Initially, the intervals are sorted to ensure adjacency of overlapping intervals. During the iteration process, each interval is examined, and if its start is less than or equal to the end of the last merged interval, the end of the last merged interval is updated if necessary. If not, the current interval is added as a new merged interval. The final result consists of the merged intervals. The time complexity is O(n log n) due to the sorting step and O(n) for merging intervals, resulting in an overall time complexity of O(n log n). The space complexity is O(n) as the output vector stores the merged intervals.

##  Maximum Product Subarray 
### Problem Statement
You are given an integer array nums, and your task is to find a subarray within it that has the largest product, and return the value of that product. The test cases are designed in such a way that the answer will always fit within a 32-bit integer.
### Solution
Efficiently addressing the given problem involves the utilization of two variables to monitor the maximum and minimum subarray products that conclude at the current element. This approach is crucial as the multiplication of a sizable negative number by the current element can yield a substantial positive number, and vice versa. The underlying concept hinges on considering both the maximum and minimum subarray products, recognizing that a minimum product may transform into the maximum if multiplied by a negative number. In terms of time complexity, the solution operates at O(n), where 'n' denotes the number of elements in the input vector, executing a single pass through the array. The space complexity is constant, denoted as O(1), regardless of the input size, as the solution maintains only a few variables, showcasing minimal space utilization.


## Group Anagrams
### Problem Statement
Given an array of strings strs, you need to group the anagrams together. An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

### Solution
The task at hand involves grouping anagrams within an array of strings, where an anagram is a word or phrase formed by rearranging the letters of another word or phrase, utilizing all the original letters exactly once. To address this efficiently, a hash map is employed for categorization. The C++ solution iterates through the input array, sorting the characters in each string to generate a key, and then associates the original string with the corresponding group in the hash map. Ultimately, the hash map is transformed into the desired output format, yielding a vector of vectors containing grouped anagrams. In terms of time complexity, the code operates in O(n * k * log(k)) time, where 'n' is the number of strings in the input array, and 'k' is the maximum length of a string. The space complexity is O(n * k), accounting for the space needed by the hash map and the resultant vector of grouped anagrams.

## Search in Rotated Sorted Array	
### Problem Statement
You are given an integer array nums sorted in ascending order with distinct values. However, prior to being passed to your function, nums may have been rotated at an unknown pivot index k (where 1 <= k < nums.length). This rotation shifts the array elements, creating a new sequence as follows:

[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]
Here, n represents the number of elements in the array, and the indices are 0-indexed. For example, the original array [0,1,2,4,5,6,7] might be rotated at pivot index 3 to become [4,5,6,7,0,1,2].

Given the rotated array nums and an integer target, your task is to write an algorithm to return the index of target within nums, or -1 if target is not found.

Your algorithm must have a runtime complexity of O(log n).

### Solution
The provided C++ solution employs a modified binary search algorithm to efficiently locate the target element within a rotated sorted array. It continuously reduces the search space in each iteration, resulting in a time complexity of O(log N). The algorithm determines whether the left or right subarray is sorted (or rotated) and chooses the appropriate subarray to search based on the target value, ensuring an overall time complexity of O(log N). In terms of time complexity, the algorithm effectively halves the search space in each iteration of the binary search, leading to O(log N). Regarding space complexity, the solution is optimized with O(1), indicating a constant amount of additional memory usage, irrespective of the input size. The algorithm relies on a few integer variables and does not generate any data structures or duplicate the input vector. In summary, this solution not only efficiently locates the target element in a rotated sorted array but also minimizes memory usage, making it a resource-efficient approach.





