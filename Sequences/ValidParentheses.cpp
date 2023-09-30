/*
20. Valid Parentheses
Solved
Easy
Topics
Companies
Hint
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/
class Solution {
public:
    bool isValid(string s) {
        // Create a stack to store open brackets
        stack<char> st_open_brackets;

        // Iterate through each character in the string
        for(auto c: s)
        {
            // If the character is an open bracket, push it onto the stack
            if(c=='('||c=='['||c=='{')
            {
                st_open_brackets.push(c);
            }

            else
            {
                // If the character is a closing bracket:
                // - Check if the stack is empty (no matching open bracket)
                // - Check if the top of the stack matches the current closing bracket
                if
                (
                    st_open_brackets.empty()||
                    (c==')' && st_open_brackets.top() !='(')||
                    (c==']' && st_open_brackets.top() !='[')||
                    (c=='}' && st_open_brackets.top() !='{')
                )
                {
                    // Return false if no matching open bracket or mismatched brackets
                    return false;
                }

                // If brackets match, pop the corresponding open bracket from the stack
                st_open_brackets.pop();
            }
        }
        
        // Return true if all brackets are matched and the stack is empty
        return st_open_brackets.empty();
    }
};


/*
Time Complexity Analysis:
The time complexity is O(n), where n is the length of the input string s.

The for loop iterates through each character in the input string, taking O(n) time.
Inside the loop, each operation (push, pop, and top) on the stack takes O(1) time.
Space Complexity Analysis:
The space complexity is O(n), where n is the length of the input string s.

The space used by the stack is proportional to the number of open brackets in the input string.
In the worst case, if all characters in the input string are open brackets, the stack could contain all of them, resulting in O(n) space usage.
*/
