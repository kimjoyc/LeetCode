/*
347. Top K Frequent Elements
Medium
Topics
Companies
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
 

Follow up: Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Create a hash map to store the frequency of each element in nums.
        unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Step 2: Create a min-heap (priority queue) to keep track of the k most frequent elements.
        // The priority queue will be sorted based on the frequency of elements.
        // We will use a lambda function as the comparator to sort elements by frequency in ascending order.
        auto compare = [&](int a, int b) {
            return freqMap[a] > freqMap[b];
        };
        priority_queue<int, vector<int>, decltype(compare)> minHeap(compare);

        // Step 3: Populate the min-heap with the first k elements from the frequency map.
        for (auto& entry : freqMap) {
            minHeap.push(entry.first);
            if (minHeap.size() > k) {
                minHeap.pop();  // Remove the least frequent element if the size exceeds k.
            }
        }
        // Step 4: Create the result vector and populate it with the elements from the min-heap.
        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top());
            minHeap.pop();
        }

        // Step 5: Reverse the result vector to get the elements in descending order of frequency.
        reverse(result.begin(), result.end());

        return result;

        
    }
};
