/*
238. Product of Array Except Self
Solved
Medium
Topics
Companies
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]
Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Create a vector to store the output, initialized with the same size as nums
        vector<int> output(nums.size());

        // Initialize the first element of the output vector to 1
        output[0] = 1;

        // Calculate product of elements to the left of the current element and store it in the output vector
        for(int i = 1; i < nums.size(); i++) {
            output[i] = output[i - 1] * nums[i - 1];
        }

        // Initialize a variable to keep track of product to the right of the current element
        int post_prod = 1;

        // Calculate product of elements to the right of the current element and update the output vector
        for(int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= post_prod;
            post_prod *= nums[i];
        }

        // Return the final output vector
        return output;
    }
};


/*

*/
