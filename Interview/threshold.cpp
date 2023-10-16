/*
Given an array of integers numbers, find the index i for which these three consecutive elements numbers[i], numbers[i+1], numbers[i+2] are all greater than a given threshold if there is no such index return -1

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(numbers.length^2) will fit within the execution time limit.

Example:
For numbers = [0, 1, 4, 3, 2, 5] and threshold = 1 the output should be solution(numbers, threshold)=2

Explanation: 
When i = 0, the triple (numbers[0], numbers[1], numbers[2]) = (0, 1 ,4) which contains 0 and 1 which are not greater than threshold = 1.

When i = 1, the triple (numbers[1], number[2], numbers[3]) = (1, 4, 3) contains 1 which is not greater than threshold = 1.

When i =2, the triples (numbers[2], numbers[3], numbers[4]) = (4, 3, 2) contains all numbers greater thahn threshold = 1.

Thus, answer is i = 2.



*/
