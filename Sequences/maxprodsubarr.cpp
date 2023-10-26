/*
152. Maximum Product Subarray
Medium
Topics
Companies
Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
 

Constraints:

1 <= nums.length <= 2 * 104
-10 <= nums[i] <= 10
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // Check if the input vector is empty
        if(nums.empty()) {
            return 0; // If it's empty, return 0 as there is no product to calculate.
        }

        int max_prod = nums[0]; // Initialize the maximum product with the first element of the vector.
        int max_subarr_prod = nums[0]; // Initialize the maximum product for subarrays with the first element.
        int min_subarr_prod = nums[0]; // Initialize the minimum product for subarrays with the first element.

        for(int i = 1; i < nums.size(); i++) {
            // If the current element is negative, swap the minimum and maximum subarray products.
            if(nums[i] < 0) {
                swap(min_subarr_prod, max_subarr_prod);
            }

            // Update the maximum subarray product by choosing either the current element or the product of the current element and the previous maximum product.
            max_subarr_prod = max(nums[i], max_subarr_prod * nums[i]);

            // Update the minimum subarray product by choosing either the current element or the product of the current element and the previous minimum product.
            min_subarr_prod = min(nums[i], min_subarr_prod * nums[i]);

            // Update the maximum product with the maximum subarray product found so far.
            max_prod = max(max_prod, max_subarr_prod);
        }

        // Return the maximum product of any subarray within the given vector.
        return max_prod;
    }
};
/*
Time Complexity:
The code uses a single pass through the input vector, so the time complexity is O(n), where 'n' is the number of elements in the input vector.

Space Complexity:
The code uses a constant amount of extra space, regardless of the size of the input vector. This is because it maintains only a few variables (max_prod, max_subarr_prod, and min_subarr_prod) to store intermediate results, and these do not depend on the input size. Therefore, the space complexity is O(1), indicating constant space usage.
*/
