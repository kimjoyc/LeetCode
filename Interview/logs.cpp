/*
Your task is to implement a simplified inventory tracking system for a large retail store.

You are given a transaction log, where each log item corresponds to one of three transaction types: supply, sell, or return. Log items are provided in the following format:

["supply", "<item name>", "<count>", "<price>"] - the store receives <count> units of <item name>, and each item costs <price>.
["sell", "<item name>", "<count>"] - the store sells <count> units of <item name>. If the specified item is available at different prices, the cheapest ones should be sold first. It is guaranteed that the store will always have enough items to satisfy all sell transactions.
["return", "<item name>", "<count>", "<sell price>", "<new price>"] - the store takes back <count> units of <item name>. It is guaranteed that the store has sold at least <count> units of <item name> previously at price = <sell price>, which were not returned yet. The returned items can be added back to inventory and sold later at price = <new price>.
The tracking system should return the revenue from all sell transactions after processing the entire transaction log. Specifically, return an array representing the amount of money the store received from each sell transaction.

Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(logs.length2) will fit within the execution time limit.

Example

For

logs = [
  ["supply", "item1", "2", "100"],
  ["supply", "item2", "3", "60"],
  ["sell", "item1", "1"],
  ["sell", "item1", "1"],
  ["sell", "item2", "2"],
  ["return", "item2", "1", "60", "40"],
  ["sell", "item2", "1"],
  ["sell", "item2", "1"]
]
the output should be

solution(logs) = [100, 100, 120, 40, 60]
Let's look at all transactions in order:

["supply", "item1", "2", "100"] - the store receives 2 units of item1, and the price of each is 100.
["supply", "item2", "3", "60"] - the store receives 3 units of item2, and the price of each is 60.
["sell", "item1", "1"] - the store sells 1 unit of item1 at the price of 100, so revenue from the sale is 1 * 100 = 100.
["sell", "item1", "1"] - the store sells 1 unit of item1 at the price of 100, so revenue from the sale is 1 * 100 = 100.
["sell", "item2", "2"] - the store sells 2 units of item2 at the price of 60, so revenue from the sale is 2 * 60 = 120.
["return", "item2", "1", "60", "40"] - one unit of item2 is returned to the store. This specific unit can be sold later at the price of 40, so the store now has 2 units of item2 in inventory.
["sell", "item2", "1"] - the store sells 1 unit of item2. There are 2 units of item2 in inventory, and the one with price 40 should be sold, so revenue from the sale is 1 * 40 = 40.
["sell", "item2", "1"] - the store sells 1 unit of item2. There is 1 unit of item2 in inventory, which has a price of 60, so revenue from the sale is 1 * 60 = 60.
Expand to see the example video.

Note: If you are unable to view the video properly, please use this link to access it.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[memory limit] 1 GB

[input] array.array.string logs

An array of strings, where each element represents one of 3 types of transactions described above - supply, sell, or return.
Each <item name> only consists of alphanumeric characters - English letters and digits.
Each <price> and <count> are string representations of integers which are >0 and <1000.

Guaranteed constraints:
1 ≤ logs.length ≤ 100,
8 ≤ logs[i].length ≤ 35.

[output] array.integer

An array of integers representing profits from each sell transaction in logs.

[C++] Syntax Tips
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<string>>& logs) {
    unordered_map<string, vector<pair<int, int>>> inventory; // item_name -> {price, count}
    vector<int> revenue;

    for (const auto& log : logs) {
        const string& type = log[0];
        const string& itemName = log[1];

        if (type == "supply") {
            int count = stoi(log[2]);
            int price = stoi(log[3]);
            inventory[itemName].emplace_back(price, count);
        } else if (type == "sell") {
            int count = stoi(log[2]);
            int totalRevenue = 0;

            while (count > 0 && inventory[itemName].size() > 0) {
                auto& cheapestItem = *min_element(inventory[itemName].begin(), inventory[itemName].end());
                int price = cheapestItem.first;
                int availableCount = cheapestItem.second;

                int soldCount = min(count, availableCount);
                totalRevenue += soldCount * price;
                count -= soldCount;
                cheapestItem.second -= soldCount;

                if (cheapestItem.second == 0) {
                    inventory[itemName].erase(inventory[itemName].begin());
                }
            }

            revenue.push_back(totalRevenue);
        } else if (type == "return") {
            int count = stoi(log[2]);
            int sellPrice = stoi(log[3]);
            int newPrice = stoi(log[4]);

            inventory[itemName].emplace_back(newPrice, count);
        }
    }

    return revenue;
}

int main() {
    vector<vector<string>> logs = {
        {"supply", "item1", "2", "100"},
        {"supply", "item2", "3", "60"},
        {"sell", "item1", "1"},
        {"sell", "item1", "1"},
        {"sell", "item2", "2"},
        {"return", "item2", "1", "60", "40"},
        {"sell", "item2", "1"},
        {"sell", "item2", "1"}
    };

    vector<int> result = solution(logs);

    cout << "Revenue from each sell transaction:" << endl;
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
