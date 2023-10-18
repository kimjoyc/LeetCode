/*

Code

Testcase
Testcase
Result

49. Group Anagrams
Medium
Topics
Companies
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
*/


To group anagrams together, we can use a hash map where the key is a sorted version of each string (representing its characters in alphabetical order), and the value is a list of strings that match that sorted version. Here's a C++ solution to achieve this:

cpp
Copy code
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create a hash map to store groups of anagrams
        std::unordered_map<std::string, std::vector<std::string>> anagramGroups;
        
        for (const std::string& str : strs) {
            // Sort the characters of the string to use as a key
            std::string sortedStr = str;
            std::sort(sortedStr.begin(), sortedStr.end());
            
            // Add the original string to the corresponding group
            anagramGroups[sortedStr].push_back(str);
        }
        
        // Transform the hash map into the required output format
        std::vector<std::vector<std::string>> result;
        for (const auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
/*

*/
