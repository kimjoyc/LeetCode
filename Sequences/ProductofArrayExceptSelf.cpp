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
Time Complexity Analysis
The time complexity of this function is O(N), where N is the number of elements in the input vector nums. This is because there are two passes through the input vector: one from left to right and one from right to left. Both passes iterate through the input vector once, performing constant-time operations for each element.

Space Complexity Analysis
The space complexity of this function is O(1) excluding the output vector, and O(N) considering the output vector.

Excluding the output vector: The function uses a constant amount of extra space for variables (int post_prod and loop variables) and does not scale with the input size, so it's O(1).

Including the output vector: The function creates an output vector of size N to store the result, where N is the size of the input vector nums. Therefore, the space complexity due to the output vector is O(N).

In summary, the space complexity is O(1) (excluding the output vector) or O(N) (including the output vector).
*/
