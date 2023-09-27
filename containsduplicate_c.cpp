/*
217. Contains Duplicate
Easy
Topics
Companies
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109
*/
class Solution {
public:
    // Function to check if the input vector contains any duplicate elements.
    bool containsDuplicate(vector<int>& nums) {
        // Create an unordered map to store the count of each number.
        unordered_map<int, int> map_of_nums;

        // Iterate through each number in the input vector.
        for(auto n : nums) {
            // Increment the count of the current number in the map.
            map_of_nums[n]++;
        }

        // Initialize a flag to indicate whether a duplicate was found.
        bool flag = false;

        // Iterate through the map to check for duplicates.
        for (auto map : map_of_nums) {
            // If a number appears more than once, set the flag to true.
            if(map.second >= 2) {
                flag = true;
            }
        }

        // Return the flag, indicating whether duplicates were found.
        return flag;
    }
};
