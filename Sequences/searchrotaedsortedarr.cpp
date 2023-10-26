/*
33. Search in Rotated Sorted Array
Medium
Topics
Companies
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/
class Solution {
public:
    // Define a class named "Solution."

    int search(vector<int>& nums, int target) {
        // Define a member function named "search" that takes a reference to a vector of integers and an integer as input.

        int left = 0;
        // Initialize an integer variable "left" with the value 0.
        int right = nums.size() - 1;
        // Initialize an integer variable "right" with the index of the last element in the vector "nums."

        while (left <= right) {
            // Start a while loop that continues as long as the "left" index is less than or equal to the "right" index.

            int mid = (left + right) / 2;
            // Calculate the middle index by averaging the "left" and "right" indices.

            if (nums[mid] == target) {
                // Check if the value at the middle index of the vector "nums" is equal to the target value.

                return mid;
                // If the target value is found at the middle index, return the middle index.

            }

            if (nums[left] <= nums[mid]) {
                // Check if the left subarray is sorted or rotated, meaning that the element at the "left" index is less than or equal to the element at the "mid" index.

                if (nums[left] <= target && target < nums[mid]) {
                    // Check if the target value is within the range of the left subarray.

                    right = mid - 1;
                    // Update the "right" index to search in the left subarray.

                } else {
                    left = mid + 1;
                    // Update the "left" index to search in the right subarray.
                }
            } else {
                // If the left subarray is not sorted, it means the right subarray is sorted or rotated.

                if (nums[mid] < target && target <= nums[right]) {
                    // Check if the target value is within the range of the right subarray.

                    left = mid + 1;
                    // Update the "left" index to search in the right subarray.

                } else {
                    right = mid - 1;
                    // Update the "right" index to search in the left subarray.
                }
            }
        }

        return -1;
        // If the target value is not found in the vector "nums," return -1.
    }
};

/*
Time Complexity:

The code uses a modified binary search algorithm to find a target element in a rotated sorted array. The time complexity is O(log N), where N is the number of elements in the input vector nums.

In each iteration of the while loop, the search space is effectively reduced in half by adjusting the left and right indices.
The algorithm continues until the search space has been reduced to a single element or the target is found, making it a logarithmic time complexity.
Space Complexity:

The space complexity of the code is O(1), which means it uses a constant amount of additional memory regardless of the input size. Here's why:

The code only uses a few integer variables (left, right, mid) and a constant number of temporary variables. These variables do not depend on the input size and occupy a constant amount of memory.

The vector nums is passed by reference, so there is no additional memory allocated for a copy of the vector. The vector itself is not modified.

The code does not use any data structures or recursion that would result in additional memory usage proportional to the input size.

In summary, the space complexity is O(1) because the code uses a fixed, constant amount of memory regardless of the size of the input vector.
*/
