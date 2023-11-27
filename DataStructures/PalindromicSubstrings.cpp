/*


647. Palindromic Substrings
Medium
Topics
Companies
Hint
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 
*/
// Class definition for a solution
class Solution {
public:
    // Function to count palindromic substrings in a given string
    int countSubstrings(string s) {
        // Variable to store the count of palindromic substrings
        int count = 0;

        // Loop through each character in the string
        for(int i = 0; i <= s.length(); i++) {
            // Variables to represent the left and right indices of the current substring
            int left = i;
            int right = i;

            // Check for palindromic substrings with odd length
            while(left >= 0 && right < s.length() && s[left] == s[right]) {
                // Increment the count when a palindromic substring is found
                count++;
                // Expand the substring by moving the left and right indices outward
                left--;
                right++;
            }

            // Reset indices for the even length substring
            left = i;
            right = i + 1;

            // Check for palindromic substrings with even length
            while(left >= 0 && right < s.length() && s[left] == s[right]) {
                // Increment the count when a palindromic substring is found
                count++;
                // Expand the substring by moving the left and right indices outward
                left--;
                right++;
            }
        }

        // Return the total count of palindromic substrings
        return count;
    }
};
