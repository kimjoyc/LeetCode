/*
207. Course Schedule
Medium
Topics
Companies
Hint
There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.
Return true if you can finish all courses. Otherwise, return false.

 

Example 1:

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0. So it is possible.
Example 2:

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.
 

Constraints:

1 <= numCourses <= 2000
0 <= prerequisites.length <= 5000
prerequisites[i].length == 2
0 <= ai, bi < numCourses
All the pairs prerequisites[i] are unique.
*/


#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        // Build the in-degree and adjacency list representing the graph
        std::unordered_map<int, std::vector<int>> graph;  // Map to store adjacency list
        std::unordered_map<int, int> inDegree;            // Map to store in-degrees

        // Iterate through prerequisites to build the graph and calculate in-degrees
        for (const auto& prereq : prerequisites) {
            graph[prereq[1]].push_back(prereq[0]);   // Add directed edge from prereq[1] to prereq[0]
            inDegree[prereq[0]]++;                   // Increment in-degree of prereq[0]
        }

        // Initialize a queue for BFS
        std::queue<int> q;

        // Add courses with in-degree 0 to the queue
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);  // Enqueue courses with no prerequisites
            }
        }

        // Perform BFS
        while (!q.empty()) {
            int course = q.front();
            q.pop();

            // Update in-degrees of neighbors
            if (graph.count(course)) {
                for (int neighbor : graph[course]) {
                    inDegree[neighbor]--;  // Decrement in-degree of the neighbor
                    if (inDegree[neighbor] == 0) {
                        q.push(neighbor);   // Enqueue neighbor if its in-degree becomes 0
                    }
                }
            }
        }

        // If there are any remaining courses with in-degree greater than 0, there is a cycle
        for (const auto& entry : inDegree) {
            if (entry.second > 0) {
                return false; // There is a cycle
            }
        }

        return true; // No cycle found, all courses can be finished
    }
};
