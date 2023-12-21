/*
435. Non-overlapping Intervals
Medium
Topics
Companies
Given an array of intervals intervals where intervals[i] = [starti, endi], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

 

Example 1:

Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
Example 2:

Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
Example 3:

Input: intervals = [[1,2],[2,3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
 

Constraints:

1 <= intervals.length <= 105
intervals[i].length == 2
-5 * 104 <= starti < endi <= 5 * 104
*/

#include <vector>
#include <algorithm>

class Solution {
public:
    // Function to find the minimum number of intervals to remove
    int eraseOverlapIntervals(std::vector<std::vector<int>>& intervals) {
        // Check if the intervals array is empty
        if (intervals.empty()) {
            return 0;  // If empty, no removal needed
        }

        // Sort intervals based on end points using lambda function
        std::sort(intervals.begin(), intervals.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];  // Sort by end points in ascending order
        });

        int removals = 0;  // Initialize the removal count
        int end = intervals[0][1];  // Initialize the end point with the first interval's end

        // Iterate through sorted intervals starting from the second interval
        for (int i = 1; i < intervals.size(); ++i) {
            // If the current interval overlaps with the previous one
            if (intervals[i][0] < end) {
                ++removals;  // Increment removal count
            } else {
                end = intervals[i][1];  // Update the end point if no overlap
            }
        }

        return removals;  // Return the final count of removed intervals
    }
};
