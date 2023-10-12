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


## 3Sum

### Problem Statement
Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

### Examples

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
- nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
- nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
- nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

### Constraints
- 3 <= nums.length <= 3000
- -10^5 <= nums[i] <= 10^5

## Solution
Sort the Array

Sort the input array to simplify finding triplets that sum to zero.
Iterate and Use Two Pointers

Iterate through the sorted array, considering each element as a potential first element of the triplet.
Use two pointers technique (left and right) for the remaining elements.
Find Triplets

Adjust pointers based on the sum of the triplet, aiming for a sum of zero.
Collect unique triplets that satisfy the condition.
Avoid Duplicate Triplets

Use a set to automatically handle and avoid duplicate triplets.
Return the Result

Convert the set of unique triplets to a vector for returning the result.
Complexity Analysis
Time Complexity:

Sorting: O(n log n)
Iteration and pointer manipulation: O(n)
Overall time complexity: O(n log n) due to sorting.
Space Complexity:

Output vector and set: O(n^2)
Overall space complexity: O(n^2) due to the potential O(n^2) triplets and the set to store them.


## Merge Intervals
### Problem Statement
You are given a list of intervals, where each interval is represented by a pair of integers [start, end]. Your task is to merge overlapping intervals and return a list of non-overlapping intervals.

### Examples
Input:
intervals = [[1,3],[2,6],[8,10],[15,18]]
Output:
[[1,6],[8,10],[15,18]]
Explanation:
Interval [1,3] and [2,6] overlap and are merged into [1,6].
Intervals [8,10] and [15,18] are non-overlapping and remain as separate intervals.
Input:
intervals = [[1,4],[4,5]]
Output:
[[1,5]]
Explanation:
Interval [1,4] and [4,5] overlap and are merged into [1,5].
### Constraints
The input intervals are non-empty.
Each interval is represented by a pair of integers [start, end] where start < end.
### Solution
The solution to this problem involves sorting the intervals based on their start times and then iterating through the sorted intervals to merge overlapping ones.

#### Approach
Sort the intervals: Sort the intervals based on their start times to ensure that overlapping intervals are adjacent.

Merge Intervals: Iterate through the sorted intervals. For each interval:

If the start of the current interval is less than or equal to the end of the last merged interval, update the end of the last merged interval if needed.
If not, add the current interval as a new merged interval.
Return Merged Intervals: Return the merged intervals as the final result.

Time Complexity
Sorting the intervals: O(n log n)
Merging the intervals: O(n)
The overall time complexity is O(n log n) due to the sorting step.

Space Complexity
Space for the output vector: O(n)
The overall space complexity is O(n) due to the output vector storing the merged intervals.
