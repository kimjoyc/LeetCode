/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
*/

// Define a class named "Solution"
class Solution {
public:
    // Define a member function named "twoSum" which takes a vector of integers (nums) and an integer (target) as parameters and returns a vector of integers
    vector<int> twoSum(vector<int>& nums, int target) {
        // Iterate through the elements of the input vector 'nums'
        for(int i=0; i<nums.size(); i++) {
            // Nested loop to iterate through the elements of the input vector 'nums' again
            for(int j = 0; j < nums.size(); j++) {
                // Check if 'i' and 'j' are different indices
                if(i != j) {
                    // Check if the sum of elements at indices 'i' and 'j' equals the 'target'
                    if(nums[i] + nums[j] == target) {
                        // If found, return a vector containing the indices 'i' and 'j'
                        return {i, j};
                    }
                }
            }
        }
        // If no pair of indices is found that adds up to the 'target', return an empty vector
        return {};
    }
};

/*

The given algorithm aims to find two indices in the input array 'nums' such that the elements at those indices sum up to the given 'target'. 

Time Complexity:
The time complexity of the provided algorithm is O(n^2) due to the nested loop. The algorithm iterates through the array 'nums' twice, resulting in a time complexity that grows quadratically with the size of the input array.

Space Complexity:
The space complexity of the algorithm is O(1) since it only uses a few extra variables for iteration and does not depend on the size of the input array. The returned vector of indices has a constant size (always two elements), so it doesn't contribute to the space complexity as the input size grows.

Follow-up:
To achieve less than O(n^2) time complexity, we can use a hash map to store previously seen numbers and their indices. This can reduce the time complexity to O(n) at the cost of slightly increased space complexity. If you'd like, I can provide an example of how to modify the algorithm to achieve this.
*/
