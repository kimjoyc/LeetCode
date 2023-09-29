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
Time Complexity Analysis
Checking lengths of s and t: O(1)
Building the count map by iterating through the characters of s and t: O(n), where n is the length of the strings (since iterating through both strings takes linear time)
Iterating through the count map and checking for non-zero counts: O(26) or O(1) since there are a fixed number of lowercase English letters
The overall time complexity is O(n) due to the linear iteration through the strings to build the count map.

Space Complexity Analysis
Count map to store occurrences of characters: O(1) as there can be a maximum of 26 lowercase English letters (constant space)
Additional variables and constants used: O(1)
The overall space complexity is O(1) as the space used is not dependent on the input size but rather on a fixed number of lowercase English letters.

Handling Unicode Characters (Follow-up)
If the inputs contain Unicode characters, we would need to adapt the solution to handle a larger character set. In this case, we would use a hash map or an array of size 128 (assuming ASCII characters) or even larger to accommodate a broader range of Unicode characters. The time complexity would still be O(n) for iterating through the strings, and the space complexity would be O(k) where k is the size of the character set (e.g., 128 for ASCII, or a larger value for Unicode).
*/
