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


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Create a hash map to store groups of anagrams
        unordered_map<string, vector<string>> anagramGroups;
        
        for (const string& str : strs) {
            // Sort the characters of the string to use as a key
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            
            // Add the original string to the corresponding group
            anagramGroups[sortedStr].push_back(str);
        }
        
        // Transform the hash map into the required output format
        vector<vector<string>> result;
        for (const auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
/*

*/
