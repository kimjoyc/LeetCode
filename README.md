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
The provided C++ code defines a Solution class with a function twoSum that uses a hash map to store previously seen numbers and their indices. The algorithm achieves O(n) time complexity and O(n) space complexity.


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


