/*
76. Minimum Window Substring
Solved
Hard
Topics
Companies
Hint
Given two strings s and t of lengths m and n respectively, return the minimum window 
substring
 of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
Example 2:

Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
Example 3:

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
 

Constraints:

m == s.length
n == t.length
1 <= m, n <= 105
s and t consist of uppercase and lowercase English letters.
 

Follow up: Could you find an algorithm that runs in O(m + n) time?
*/

class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();

        if (m < n) {
            return "";
        }

        // Frequency maps for characters in t and the current window
        unordered_map<char, int> targetFreq, windowFreq;

        // Populate the target frequency map
        for (char ch : t) {
            targetFreq[ch]++;
        }

        // Initialize pointers and variables to track the minimum window
        int left = 0, right = 0, minLen = INT_MAX, minStart = 0, requiredChars = targetFreq.size();

        // Number of characters in the current window that match the target
        int formedChars = 0;

        while (right < m) {
            char currentChar = s[right];

            // Update the window frequency map
            windowFreq[currentChar]++;

            // Check if the current character contributes to the formed characters
            if (targetFreq.count(currentChar) && windowFreq[currentChar] == targetFreq[currentChar]) {
                formedChars++;
            }

            // Try to minimize the window by moving the left pointer
            while (formedChars == requiredChars && left <= right) {
                // Update the minimum window information
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }

                // Move the left pointer and update the window frequency map
                char leftChar = s[left];
                windowFreq[leftChar]--;

                // Check if the current character reduces the formed characters
                if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                    formedChars--;
                }

                // Move the left pointer to shrink the window
                left++;
            }

            // Expand the window by moving the right pointer
            right++;
        }

        // Check if a valid window was found
        return (minLen == INT_MAX) ? "" : s.substr(minStart, minLen);
    }
};

