/*
121. Best Time to Buy and Sell Stock
Solved
Easy
Topics
Companies
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Initialize variables to keep track of maximum profit and minimum price seen so far.
        int max_prof = 0;  // Maximum profit initialized to 0.
        int min_price = prices[0];  // Minimum price initialized to the first element in the prices array.

        // Loop through the prices array starting from the second element.
        for (int i = 1; i < prices.size(); i++) {
            // Update maximum profit by comparing the current maximum profit and the difference between current price and minimum price seen so far.
            max_prof = max(max_prof, prices[i] - min_price);

            // Update the minimum price seen so far by comparing the current price and the previous minimum price.
            min_price = min(prices[i], min_price);
        }

        // Return the maximum profit that can be obtained.
        return max_prof;
    }
};


/*
Time Complexity Analysis:
The time complexity of this function is O(n), where n is the size of the input vector prices.

The for loop iterates through the prices vector once, so it's a linear time complexity O(n) operation.
Inside the loop, we have constant time operations such as comparisons and assignments (max, min, etc.), which don't affect the overall time complexity.
Space Complexity Analysis:
The space complexity of this function is O(1), which means it uses a constant amount of extra space regardless of the size of the input.

The variables max_prof and min_price are integers and use a constant amount of space.
The loop variable i is also an integer and uses constant space.
There are no data structures or arrays whose space requirements depend on the size of the input.
In summary:

Time complexity: O(n) (linear time complexity)
Space complexity: O(1) (constant space complexity)
*/
