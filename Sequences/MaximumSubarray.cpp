/*
53. Maximum Subarray
Medium
Topics
Companies
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
 

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Initialize variables to store the current and maximum subarray sums
        int currSubArr_sum = nums[0];
        int maxSubArr_sum = nums[0];

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {

            // Calculate the current subarray sum by choosing the maximum between the current element and the sum of the previous subarray plus the current element
            currSubArr_sum = max(nums[i], nums[i] + currSubArr_sum);

            // Update the maximum subarray sum by choosing the maximum between the previous maximum subarray sum and the current subarray sum
            maxSubArr_sum = max(maxSubArr_sum, currSubArr_sum);
        }

        // Return the maximum subarray sum
        return maxSubArr_sum;
    }
};
/*
Time Complexity:
The time complexity of this function is O(n), where n is the size of the input vector nums. This is because the function iterates through the input vector once, performing a constant number of operations for each element.

Space Complexity:
The space complexity is O(1), indicating constant space usage. The function uses only a few integer variables (currSubArr_sum and maxSubArr_sum) to keep track of the current and maximum subarray sums. The space used is independent of the input size and remains constant.
*/
