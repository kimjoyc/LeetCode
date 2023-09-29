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


/*
Time Complexity Analysis
The time complexity of this solution is primarily determined by the two main loops in the function:

The loop to populate the unordered map with counts for each element in the input vector nums.
The loop to check if any element has a count greater than or equal to 2 in the unordered map.
Let's break down the time complexity step by step:

Populating the Unordered Map:

In the first loop, we iterate over each element in the input vector nums, which has n elements.
Inserting an element into an unordered map has an average time complexity of O(1) assuming a good hash function.
Therefore, populating the unordered map has a time complexity of O(n), where n is the length of the input vector nums.
Checking for Duplicates in the Unordered Map:

In the second loop, we iterate over the unordered map, which has at most n elements (where n is the length of the input vector nums).
Checking each entry in the unordered map has a time complexity of O(1).
Therefore, checking for duplicates in the unordered map has a time complexity of O(n), where n is the number of unique elements in the input vector nums.
Hence, the overall time complexity of the containsDuplicate function is O(n), where n is the length of the input vector nums.

Space Complexity Analysis
The space complexity of this solution is primarily determined by the space used by the unordered map map_of_nums to store the counts of each element in the input vector nums.

Unordered Map:
In the worst case, when all elements in nums are distinct, the unordered map map_of_nums will have at most n entries (where n is the length of the input vector nums).
The space required for an unordered map with n entries is O(n).
Therefore, the overall space complexity of the containsDuplicate function is O(n) due to the space used by the unordered map.

In summary:

Time Complexity: O(n)
Space Complexity: O(n)

*/
