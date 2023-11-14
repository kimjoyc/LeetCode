/*
3. Longest Substring Without Repeating Characters
Solved
Medium
Topics
Companies
Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces
*/
// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(string s) {
    // Get the length of the input string
    int n = s.length();
    // Variable to store the length of the longest substring
    int maxLength = 0;
    // Set to store characters in the current window
    unordered_set<char> charSet;
    // Pointers for the sliding window
    int left = 0, right = 0;

    // Iterate through the string with the sliding window
    while (right < n) {
        // If the character at 'right' is not in the set, add it to the set and expand the window
        if (charSet.find(s[right]) == charSet.end()) {
            charSet.insert(s[right]);
            // Update the maximum length if needed
            maxLength = max(maxLength, right - left + 1);
            right++;
        } else {
            // If the character is already in the set, remove the leftmost character and shrink the window
            charSet.erase(s[left]);
            left++;
        }
    }

    // Return the length of the longest substring without repeating characters
    return maxLength;
}
/*
Time Complexity:
The time complexity of the code is O(n), where n is the length of the input string.

Explanation:

The while loop iterates through each character in the string exactly once.
Both the left and right pointers move from 0 to n-1 at most.
Each character is processed once, and no character is revisited in the worst case.
Space Complexity:
The space complexity of the code is O(min(n, m)), where n is the length of the input string and m is the size of the character set (26 for English letters, digits, symbols, and spaces).

Explanation:

The unordered_set<char> charSet is used to store unique characters in the current window.
In the worst case, the size of the set can be the size of the entire character set (m), but it can also be smaller if there are fewer unique characters in the string.
The space complexity is determined by the maximum number of unique characters in any substring.
In practical terms, if the character set is reasonably small (e.g., English letters), the space complexity can be considered O(1) since the size of the character set is constant.

In summary, the algorithm has a linear time complexity and a space complexity that depends on the size of the character set but is often considered constant or very small in practice.
*/
