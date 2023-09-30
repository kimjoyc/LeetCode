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

Initialize a Stack: The algorithm starts by creating an empty stack to keep track of open brackets encountered while iterating through the input string.

Iterate through the Input String: The algorithm iterates through each character in the input string.

Handling Open Brackets: If the current character is an open bracket ('(', '[', or '{'), it is pushed onto the stack, indicating that an open bracket has been encountered.

Handling Closing Brackets: If the current character is a closing bracket (')', ']', or '}'), the algorithm checks if the stack is not empty (indicating there was a matching open bracket). It also checks if the top of the stack corresponds to the expected open bracket for the current closing bracket. If the conditions are met, the top element (matching open bracket) is popped from the stack.

Checking Validity: If any of the conditions for a valid string of parentheses are violated (e.g., mismatched brackets or a closing bracket without a corresponding open bracket), the algorithm immediately returns false, indicating an invalid string.

Final Check: After iterating through the input string, the algorithm checks if the stack is empty. If the stack is empty, it means all open brackets have been successfully closed, and the input string is valid. If the stack is not empty, it means there are unmatched open brackets, and the input string is invalid.

Return Result: The algorithm returns true if the stack is empty (indicating a valid string of parentheses) and false otherwise (indicating an invalid string).

Time Complexity Analysis
The time complexity of the solution is O(n), where n is the length of the input string s. The for loop iterates through each character in the input string, taking O(n) time. Inside the loop, each operation (push, pop, and top) on the stack takes O(1) time.

Space Complexity Analysis
The space complexity of the solution is O(n), where n is the length of the input string s. The space used by the stack is proportional to the number of open brackets in the input string. In the worst case, if all characters in the input string are open brackets, the stack could contain all of them, resulting in O(n) space usage.

This algorithm efficiently validates the input string for valid parentheses using a stack-based approach, ensuring adherence to the specified rules for valid parentheses.





