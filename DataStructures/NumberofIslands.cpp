/*
200. Number of Islands
Solved
Medium
Topics
Companies
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
 

Constraints:

m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.
*/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // Get the number of rows and columns in the grid
        int m = grid.size();
        int n = grid[0].size();
        // Counter for the number of islands
        int count = 0;

        // Iterate through each cell in the grid
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // If the current cell is land ('1'), increment the count and explore the island
                if (grid[i][j] == '1') {
                    ++count;
                    dfs(grid, i, j);
                }
            }
        }

        // Return the total count of islands
        return count;
        
    }

    // Depth-First Search function to explore and mark connected land cells
    void dfs(vector<vector<char>>& grid, int i, int j) {
        // Get the number of rows and columns in the grid
        int m = grid.size();
        int n = grid[0].size();

        // Base case: Check if the current cell is out of bounds or is water ('0')
        if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == '0') {
            return;
        }

        // Mark the current cell as visited by changing its value to '0'
        grid[i][j] = '0';

        // Explore the neighboring cells (up, down, left, right)
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
};
