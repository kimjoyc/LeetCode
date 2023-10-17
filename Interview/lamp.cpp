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


*/

int solution(vector<vector<int>> lamps)
