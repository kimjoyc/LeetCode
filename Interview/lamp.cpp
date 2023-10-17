/*
There are some lamps placed on coordinate line. Each of these lamps illuminates some space around it within a given radius.

You are given the coordinates of the lamps on the line, and the effective radius of each lamps' light.

In other words, you are given a two-dimensional array lamps, where lamps[i] contains information about i-th lamp.


lamps[i][0] is an integer representing the lamp's coordinate
lamps[i][1] is a positive integer representing the lamps' effective radius.
That means that the i-th lamp illuminates everything from the range from lamps[i][0] - lamps[i][1] to lamps[i][0] + lamps[i][1] inclusive.

Your task is to find the number of integer coordinates that are illuminated exactly by 1 lamp.


Example: 
For lamps = [[-2,3],[2,3],[2,1]], the output should be solution(lamps)=6.

The first lamp illuminates everything in range of [-2-3,-2+3] = [-5,1]

The second lamp illuminates everything in range of [2-3,2+3] = [-1,5]

The third lamp illuminates everything in range of [2-1, 2+1] = [1,3]

The points that are illuminated exactly by 1 lamp are [-5, -4, -3, -2, 4, 5]  hence answer = 6.


For lamps = [[-2,1],[2,1]] output should be solution(lamps)=6

The first lamp illuminates [-2-1,-2+1] = [-3,-1]

The second lamp illuminates [2-1,2+1]= [1,3]

The points illuminated by exactly 1 lamp are [-3,-2,-1,1,2,3] answer =6.

*/

#include <iostream>
#include <vector>
#include <unordered_map>

int solution(const std::vector<std::vector<int>>& lamps) {
    std::unordered_map<int, int> countMap;

    for (const auto& lamp : lamps) {
        int start = lamp[0] - lamp[1];
        int end = lamp[0] + lamp[1];

        for (int i = start; i <= end; ++i) {
            countMap[i]++;
        }
    }

    int illuminatedCount = 0;
    for (const auto& entry : countMap) {
        if (entry.second == 1) {
            illuminatedCount++;
        }
    }

    return illuminatedCount;
}

int main() {
    // Test usage
    std::vector<std::vector<int>> lamps1 = {{-2, 3}, {2, 3}, {2, 1}};
    std::cout << "Test 1: " << solution(lamps1) << std::endl; // Output: 6

    std::vector<std::vector<int>> lamps2 = {{-2, 1}, {2, 1}};
    std::cout << "Test 2: " << solution(lamps2) << std::endl; // Output: 6

    return 0;
}

