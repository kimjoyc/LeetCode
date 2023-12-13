## Reverse a Linked List
### Problem Statement
You are given the head of a singly linked list. Your task is to reverse the list and return the reversed list.
### Solution
In the iterative approach, two pointers, prev and current, are initialized. The loop traverses the original linked list, reversing the links between nodes. After the loop, the prev pointer becomes the new head of the reversed list. The time complexity is O(n), and the space complexity is O(1), utilizing a constant amount of extra space for pointers.

## Detect Cycle in a Linked List 
### Problem Statement
Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
Return true if there is a cycle in the linked list. Otherwise, return false.
### Solution
To identify cycles in a linked list efficiently, a specialized class is implemented with a time complexity of O(n) and space complexity of O(1). The algorithm employs a two-pointer system, where a slow pointer and a fast pointer traverse the list. If they meet, a cycle is present; otherwise, a false value is returned. The algorithm's time complexity is determined by a while loop that traverses the linked list, iterating through all nodes at most twice. The space complexity is O(1), utilizing only a constant number of pointers and integer variables. Overall, this algorithm is well-suited for detecting cycles in a linked list with optimal efficiency.

## Container With Most Water 
### Problem Statement
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Your task is to find two lines that, together with the x-axis, form a container, such that the container contains the most water. You need to return the maximum amount of water that the container can store.
### Solution
The C++ function maxArea employs a two-pointer approach on a vector of integers to efficiently find the maximum water container area. It iterates through the vector, calculating container height and width, updating maxArea accordingly, and adjusting pointers until convergence. The time complexity is O(n), and space complexity is O(1). This solution provides an optimal method for the task.

## Find Minimum in Rotated Sorted Array
### Problem Statement
Suppose you have an array of unique elements that is sorted in ascending order but has been rotated between 1 and n times. For example, the array nums might look like:
[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
You need to find and return the minimum element in this rotated array.
### Solution 
The algorithm efficiently finds the minimum element in a rotated or sorted array using binary search, achieving a time complexity of O(log n) and a space complexity of O(1). It initializes pointers, updates results based on sorted subarrays, and adjusts pointers to locate the minimum value. This approach consistently utilizes a minimal amount of extra space, making it effective for diverse array sizes.

## Longest Repeating Character Replacement 
### Problem Statement
You are given a string s consisting of uppercase English letters and an integer k. You can choose any character within the string and change it to any other uppercase English character. You are allowed to perform this operation at most k times.
Your task is to find the length of the longest substring containing the same letter after performing the specified character replacements.
### Solution
To address the problem, utilize a sliding window approach with an array named "count" to track character occurrences. Maintain variables for "maxCount," "start," and "maxLength." Iterate through the string, updating counts and adjusting the window as needed. Return the final "maxLength." The time complexity is O(N), and the space complexity is O(1), as the array size remains constant.

## Longest Substring Without Repeating Characters
### Problem Statement
Given a string s, find the length of the longest substring without repeating characters.
### Solution
The C++ solution employs a sliding window technique to find the length of the longest substring without repeating characters in a given string 's'. Two pointers, 'left' and 'right', manage the window, while a set, 'charSet', tracks unique characters. The algorithm iterates through the string, expanding and contracting the window as needed. The time complexity is O(n), where n is the string length, and the space complexity is O(min(n, m)), with m being the character set size. In practical terms, for a reasonably small character set, the space complexity is effectively O(1).

## Number of Islands
### Problem Statement
Given a binary grid representing a map with '1's (land) and '0's (water), the task is to return the number of islands in the grid. An island is formed by connecting adjacent lands horizontally or vertically, and it is assumed that all four edges of the grid are surrounded by water. 

### Solution
The C++ code presents a Solution class with a public function, numIslands, tasked with determining the count of islands within a 2D grid of '1's (land) and '0's (water). Utilizing Depth-First Search (DFS) methodology, the algorithm initializes variables for grid dimensions and island count, employing nested loops to traverse each cell in the grid. When encountering a land cell ('1'), the counter increments, triggering a DFS function for exploring and marking connected land cells. The recursive DFS function visits each neighboring cell and marks it as visited. The main function demonstrates the solution's application with provided examples. Time complexity is O(M * N), as DFS may visit each cell once. The space complexity, O(M * N), arises from recursive calls and grid modification. In conclusion, the DFS solution efficiently counts islands with linear time and space complexity in binary grids.


## Remove Nth Node From End of List
### Problem Statement
Given the head of a linked list, you are tasked with removing the nth node from the end of the list and returning its head.
### Solution
Implement a two-pointer approach to navigate through the linked list. Advance the fast pointer by n+1 steps, establishing a gap of n nodes between the fast and slow pointers. Continue moving both pointers until the fast pointer reaches the end. Modify the next pointer of the slow pointer to eliminate the nth node. The algorithm involves creating a dummy node for handling edge cases, moving the fast pointer ahead by n+1 steps, traversing the list with both pointers until the fast pointer reaches the end, adjusting the slow pointer's next pointer to remove the nth node, and finally returning the updated head of the linked list. The time complexity is O(N) (linear time), where N is the number of nodes, and the space complexity is O(1) (constant space).

## Palindromic Substrings
### Problem Statement
Given a string s, return the number of palindromic substrings in it.
### Solution
The solution efficiently identifies palindromic substrings in a given string by iterating through each character and expanding around it to find both odd and even-length palindromes separately. The algorithm initializes a count variable to track the number of palindromic substrings. It operates with a time complexity of O(n^2), where n is the length of the input string, due to the potential need to expand around each character. The space complexity is O(1) as it utilizes only a constant amount of extra space.


## Pacific Atlantic Water Flow	
### Problem Statement
Given an island represented by an m x n matrix where each cell contains the height above sea level, find and return the grid coordinates where rainwater can flow from the cell to both the Pacific and Atlantic oceans.
### Solution
The problem addresses identifying grid coordinates on an island where rainwater can flow to both the Pacific and Atlantic oceans. The island is represented by an m x n matrix, with each cell denoting the height above sea level. The solution employs Depth-First Search (DFS) to traverse the matrix, marking cells reachable from either the Pacific or Atlantic oceans. Starting from the top and left edges, cells that can reach the Pacific are marked, and similarly, cells that can reach the Atlantic are marked from the bottom and right edges. The marked cells are then examined to find coordinates where rainwater can flow to both oceans. The implementation includes a class Solution with methods for DFS and the main logic, with example usage provided in the main function. The time complexity is O(m * n), where m and n are the matrix dimensions, and the space complexity is also O(m * n) due to the matrices used for marking reachable cells.

## Minimum Window Substring	
### Problem Statement
Given two strings s and t, find the minimum window substring in s containing all characters from t. If no such substring exists, return an empty string. The solution should run in O(m + n) time, where m and n are the lengths of strings s and t, respectively.
### Solution
The provided solution implements a sliding window algorithm to efficiently find the minimum window substring of two given strings s and t. The algorithm utilizes two frequency maps (targetFreq and windowFreq) and two pointers (left and right). The window expands by moving the right pointer and shrinks by moving the left pointer. The minimum window substring is updated when a valid window is found. The time complexity is O(m + n), where m is the length of string s, and n is the length of string t, and the space complexity is O(n), where n is the length of string t. The solution satisfies the given constraints and offers an efficient approach to the problem.










