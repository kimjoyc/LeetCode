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

For numbers = [-9, 95, 94, 4, 51] and threshold = 42 the output should be solution(numbers, threshold) = -1

Explanation:
When i = 0 the triple (numbers[0], numbers[1], numbers[2]) = (-9, 95, 94) contains -9 < 42 which does not satisfy condition. 

When i = 1 the triple (numbers[1], numbers[2], numbers[3]) = (95, 94, 4) contains 4 < 42 which does not satisfy the condition 

When i = 2 the triple (numbers[2], numbers[3], numberes[4]) = (94, 4, 51) contains 4 < 42 does not satisfy the condition return -1.



*/

int solution(vector<int> numbers, int threshold) 
{
  //triplet index variable to store array size divisible by 3 to the nearest whole number
  int triplets_index = numbers.size()/3;
  //for loop iterating through all possible triplet combinations
  int index;
  for(int i = 0; i<= triplets_index; i++)
  {
      if(numbers[i] > threshold && numbers[i+1] > threshold && numbers[i+2] > threshold)
      {
          index = i;
      }
      
      else
      {
         index = -1;
      }
      
  }
    return index;
}

int main()
{
  vector<int> test1_arr = {0,1,4,3,2,5};
  int test1_thresh = 1;
  solution(test1_arr,test1_thresh);
  
}
