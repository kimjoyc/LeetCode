# LeetCode
This repository contains solutions for coding problems.

## Contains Duplicate
### Problem Statement
Given an integer array nums, determine if any value appears at least twice in the array, returning true if duplicates exist and false if all elements are distinct.

### Example
Input: [1,2,3,1]
Output: true

### Constraints
1 <= nums.length <= 105
-109 <= nums[i] <= 109

### Solution
The provided C++ code defines a Solution class with a function containsDuplicate that checks for duplicates in the input array using an unordered map to store the count of each element. The time complexity is O(n), and the space complexity is O(n).

## Two Sum

### Problem Statement
Given an array of integers nums and an integer target, find two numbers in the array that sum up to the target and return their indices. Assume that there is exactly one solution and the same element is not used twice.

### Example
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

### Constraints
2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109

### Solution
The provided C++ code defines a Solution class with a function twoSum that uses a hash map to store previously seen numbers and their indices. The algorithm achieves O(n^2) time complexity and O(1) space complexity.


## Best Time to Buy and Sell Stock
### Problem Statement
You are given an array prices where prices[i] is the price of a given stock on the ith day. The goal is to maximize profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. If no profit can be achieved, return 0.

### Example
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: No transactions are done, max profit = 0.

### Constraints
1 <= prices.length <= 105
0 <= prices[i] <= 104

### Solution
The provided C++ code defines a Solution class with a maxProfit function. This algorithm efficiently calculates the maximum profit that can be achieved by iterating through the given stock prices array. It keeps track of the maximum profit and the minimum price seen so far while traversing the array. The algorithm achieves a time complexity of O(n) and a space complexity of O(1), where n is the size of the input prices array.


## Valid Anagram
This code provides a solution to determine if two given strings, s and t, are anagrams of each other. An anagram is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.

### Example
Input
s = "anagram", t = "nagaram"
Output
true
Input
s = "rat", t = "car"
Output
false

### Constraints
1 <= s.length, t.length <= 5 * 10^4
s and t consist of lowercase English letters.
### Solution
The approach involves comparing the character counts in both strings. If the counts for each character are the same, the strings are anagrams.

Check if the lengths of s and t are different, in which case they can't be anagrams.
Initialize a hash map to count the occurrences of characters in both strings.
Iterate through each character in s and t, updating the character counts in the hash map.
Check if all character counts are equal; if they are, the strings are anagrams.

Time Complexity
The time complexity is O(n), where n is the length of the strings, due to the linear iteration through the strings to build the count map.

Space Complexity
The space complexity is O(1) as the space used is not dependent on the input size but rather on a fixed number of lowercase English letters.

Handling Unicode Characters (Follow-up)
If the inputs contain Unicode characters, adapt the solution by using a hash map or an array of appropriate size to accommodate the larger character set. The time complexity remains O(n), and the space complexity becomes O(k), where k is the size of the character set (e.g., 128 for ASCII, or a larger value for Unicode).


## Valid Parentheses
### Problem Statement
Given a string s containing just the characters '(', ')', '{', '}', '[', and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every closing bracket has a corresponding open bracket of the same type.

### Example
Example 1:

Input:
s = "()"
Output:
true
Example 2:

Input:
s = "()[]{}"
Output:
Example 3:

Input:
s = "(]"
Output:
false
### Constraints
1 <= s.length <= 10^4
s consists of parentheses only '()[]{}'.


### Solution
The problem requires determining whether a given string of parentheses is valid according to certain rules:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every closing bracket has a corresponding open bracket of the same type.

The provided C++ code uses a stack-based approach. 

Time Complexity Analysis
The time complexity of the solution is O(n), where n is the length of the input string s. 

Space Complexity Analysis
The space complexity of the solution is O(n), where n is the length of the input string s.

This algorithm efficiently validates the input string for valid parentheses using a stack-based approach, ensuring adherence to the specified rules for valid parentheses.

## Maximum Subarray Sum
### Problem Statement
Given an integer array nums, find the contiguous subarray with the largest sum and return the sum of that subarray.

### Example
nums = [-2,1,-3,4,-1,2,1,-5,4]
Output
6
Explanation
The subarray [4,-1,2,1] has the largest sum, which is 6.
### Constraints
1 <= nums.length <= 105
-104 <= nums[i] <= 104

### Solution 
Initialize variables to store the current subarray sum (currSubArr_sum) and the maximum subarray sum (maxSubArr_sum) to the first element of the input array.

Iterate through the array starting from the second element.

For each element, calculate the current subarray sum by choosing the maximum between the current element and the sum of the previous subarray plus the current element.

Update the maximum subarray sum by choosing the maximum between the previous maximum subarray sum and the current subarray sum.

Return the maximum subarray sum.

Time Complexity
The time complexity of this solution is O(n), where n is the size of the input vector nums.
Space Complexity
The space complexity is O(1), indicating constant space usage.

## Product of Array Except Self
### Problem Statement
Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the original array except the one at i.

### Example
Input: [1, 2, 3, 4]
Output: [24, 12, 8, 6]
Explanation: The output is calculated as follows:

output[0] = 2 * 3 * 4 = 24
output[1] = 1 * 3 * 4 = 12
output[2] = 1 * 2 * 4 = 8
output[3] = 1 * 2 * 3 = 6

### Constraints
The length of the given array is at least 2.
The length of the given array is at most 1000.
Elements in the given array are within the range [-10^4, 10^4].

### Solution
The algorithm can be implemented using two passes through the input array. The first pass calculates the product of all elements to the left of each element, and the second pass calculates the product of all elements to the right of each element. The final result is the product of the left and right products for each element. The time complexity of this algorithm is O(N) and the space complexity is O(1) excluding the output array, or O(N) including the output array.



