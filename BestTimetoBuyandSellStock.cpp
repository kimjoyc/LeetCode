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

*/
