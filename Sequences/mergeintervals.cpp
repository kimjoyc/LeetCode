/*
56. Merge Intervals
Medium
Topics
Companies
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
 

Constraints:

1 <= intervals.length <= 104
intervals[i].length == 2
0 <= starti <= endi <= 104

*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        // Sort the intervals based on the first element in each pair
        sort(intervals.begin(), intervals.end());

        // Initialize the output variable to store merged intervals
        vector<vector<int>> output;
        output.push_back(intervals[0]); // Add the first interval to the output

        // Iterate through all intervals
        for (int i = 1; i < intervals.size(); i++) {

            // Reference to the most recent interval added to the output
            vector<int> &recent_end_vec = output.back();

            // Get the end value of the most recent interval
            int recent_end = recent_end_vec[1];

            // Check if the start of the current interval is less than or equal to the end value of the most recent interval
            if (intervals[i][0] <= recent_end) {
                // Update the end value of the most recent interval if needed
                recent_end_vec[1] = max(recent_end, intervals[i][1]);
            } else {
                // If the current interval doesn't overlap, add it to the output
                output.push_back(intervals[i]);
            }
        }

        // Return the merged intervals
        return output;
    }
};


/*

*/
