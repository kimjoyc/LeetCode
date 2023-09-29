/*

Code

Testcase
Testcase
Result

242. Valid Anagram
Easy
Topics
Companies
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
*/
class Solution {
public:
    bool isAnagram(string s, string t) {

        // Check if the lengths of strings s and t are different, which means they can't be anagrams
        if(s.length() != t.length())
        {
            return false;
        }

        // Initialize a hash map for counting the occurrences of characters in strings s and t
        unordered_map<char, int> count_map;

        // Iterate through the characters of string s
        for(int i = 0; i < s.length(); i++)
        {
            // Count occurrences of each character in string s and increment the count
            count_map[s[i]]++;
            // Count occurrences of each character in string t and decrement the count
            count_map[t[i]]--;
        }

        // Iterate through the map using a ranged-based for loop
        for(auto count : count_map)
        {
            // Check if there are non-zero counts in the map, indicating a mismatch in character counts
            if(count.second)
            {
                return false;
            }
        }

        // If all characters have the same count in both strings, they are anagrams
        return true;
    }
};

/*

*/
