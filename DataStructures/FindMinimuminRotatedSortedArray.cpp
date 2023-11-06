/*
153. Find Minimum in Rotated Sorted Array
Medium
Topics
Companies
Hint
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.
Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
Example 3:

Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
 

Constraints:

n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
All the integers of nums are unique.
nums is sorted and rotated between 1 and n times.

*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        // Initialize the result variable to store the first value of the array
        int result = nums[0];
        // Initialize the left pointer at the beginning of the array
        int left = 0;
        // Initialize the right pointer at the end of the array
        int right = nums.size() - 1;

        // Loop through the array as long as the left pointer is less than or equal to the right pointer
        while (left <= right) {
            // In a sorted array, when the left value is less than the right value, it's already sorted,
            // so we can safely take the left value as the minimum and break out of the loop.
            if (nums[left] < nums[right]) {
                result = min(result, nums[left]);
                break;
            }

            // Initialize the middle pointer as the average of the left and right pointers
            int middle = (left + right) / 2;
            // Compare the current middle value to the result and update the result if necessary.
            result = min(result, nums[middle]);

            // In a rotated array, if the middle value is greater than or equal to the left value,
            // it means we are on the left side of the rotation where values are descending.
            if (nums[middle] >= nums[left]) {
                // Adjust the left pointer to search to the right of the middle.
                left = middle + 1;
            }
            // If the middle value is less than the left value, we are on the right side of the rotation
            // where values are ascending.
            else {
                // Adjust the right pointer to search to the left of the middle.
                right = middle - 1; 
            }
        }

        // Return the minimum value found in the rotated or sorted array.
        return result;
    }
};
/*

*/
