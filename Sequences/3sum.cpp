/*

Code

Testcase
Testcase
Result

15. 3Sum
Medium
Topics
Companies
Hint
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105
*/
class Solution {
public:
    // Define a class named Solution with public access
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Define a function threeSum that takes a vector of integers as a parameter and returns a vector of vectors of integers

        // Sort the input vector in ascending order
        sort(nums.begin(),nums.end());

        // Use a set to store unique triplets
        set<vector<int>> set_of_vec;

        // Vector of vectors to store the output triplets
        vector<vector<int>> output;

        // Iterate over all elements of the input vector
        for(int i = 0; i < nums.size(); i++) {
            // Iterate over the elements to the right of i
            int j = i + 1;

            // Iterate from the end of the array
            int k = nums.size() - 1;

            // Exit the loop when j is less than k
            while(j < k) {
                // Calculate the sum of elements at positions i, j, and k
                int sum = nums[i] + nums[j] + nums[k];

                // If the sum is zero, store the triplet in the set
                if (sum == 0) {
                    set_of_vec.insert({nums[i], nums[j], nums[k]});
                    j++;  // Increment j
                    k--;  // Decrement k
                }
                else if (sum < 0) {
                    j++;  // Increment j
                }
                else {
                    k--;  // Decrement k
                }
            }
        }

        // Iterate over the set of triplets using a ranged-based for loop
        for(auto trip : set_of_vec) {
            // Save the triplets in the output vector of vectors
            output.push_back(trip);
        }

        // Return the vector of triplets
        return output;
    }
};

/*
Time Complexity Analysis
Sorting: The sort function used to sort the input vector takes O(n log n) time complexity.

Nested Loops:

The outer loop iterates through each element in the input vector, which takes O(n) time, where n is the size of the input vector.
The inner while loop has two pointers (j and k) that move towards each other, and in the worst case, they can traverse the entire array, which also takes O(n) time.
HashSet Insertion:

The insertion of triplets into the set (set_of_vec.insert) inside the nested loop takes constant time on average, which can be approximated as O(1) assuming a good hash function and negligible collisions.
Overall, the dominant factor in the time complexity is the sorting operation, so the overall time complexity is O(n log n) due to the sorting.

Space Complexity Analysis
Input and Output Space:

The input vector nums is used as a parameter and does not contribute to additional space complexity.
The output vector of vectors output stores the final result and can have a maximum of O(n^2) triplets, so its space complexity is O(n^2).
HashSet (set_of_vec):

The space used by the set to store the unique triplets can be at most O(n^2) in the worst case, considering the maximum number of unique triplets.
The overall space complexity is dominated by the space used for the output vector and the set, so it is O(n^2) due to the potential O(n^2) triplets and the space required for the set to store them.
*/
