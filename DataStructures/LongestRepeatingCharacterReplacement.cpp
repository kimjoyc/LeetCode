/*
424. Longest Repeating Character Replacement
Medium
Topics
Companies
You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.

Return the length of the longest substring containing the same letter you can get after performing the above operations.

 

Example 1:

Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
Example 2:

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
There may exists other ways to achieve this answer too.
 

Constraints:

1 <= s.length <= 105
s consists of only uppercase English letters.
0 <= k <= s.length
Accepted
581.3K
Submissions
1.1M
Acceptance Rate
52.8%
*/
    vector<int> count(26, 0); // Store the count of characters in the current window
    int maxCount = 0;        // Store the maximum count of any character in the current window
    int start = 0;           // Start of the window

    int maxLength = 0; // Maximum length of the substring with the same character

    for (int end = 0; end < s.length(); end++) {
        count[s[end] - 'A']++; // Increment the count of the current character

        // Update the maximum count in the current window
        maxCount = max(maxCount, count[s[end] - 'A']);

        // If the number of replacements needed is greater than k,
        // we need to shrink the window from the left side
        if (end - start + 1 - maxCount > k) {
            count[s[start] - 'A']--; // Remove the character at the start of the window
            start++; // Shrink the window
        }

        // Update the maximum length of the substring
        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
/*
Time Complexity:
The time complexity of the characterReplacement function is O(N), where N is the length of the input string s. This is because the function uses a single pass through the input string using a sliding window approach.

Space Complexity:
The space complexity of the solution is O(26) = O(1) because the size of the count array is fixed at 26, representing the 26 uppercase English letters. This space usage is constant and not dependent on the input size.

In addition to the count array, there are a few integer variables used to store indices and counts, which also consume constant space. Therefore, the overall space complexity of the solution is O(1).

So, to summarize:

Time Complexity: O(N) where N is the length of the input string.
Space Complexity: O(1), constant space usag
*/
