/*


19. Remove Nth Node From End of List
Medium
Topics
Companies
Hint
Given the head of a linked list, remove the nth node from the end of the list and return its head.

 

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
Example 2:

Input: head = [1], n = 1
Output: []
Example 3:

Input: head = [1,2], n = 1
Output: [1]
 

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
 

Follow up: Could you do this in one pass?
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);  // Create a dummy node to simplify edge cases
        dummy.next = head;   // Point the dummy node to the head of the list
        ListNode* fast = &dummy;  // Initialize the fast pointer to the dummy node
        ListNode* slow = &dummy;  // Initialize the slow pointer to the dummy node

        for (int i = 0; i <= n; ++i) {
            fast = fast->next;  // Move the fast pointer ahead by n+1 steps
        }

        while (fast != nullptr) {
            fast = fast->next;  // Move the fast pointer one step
            slow = slow->next;  // Move the slow pointer one step
        }

        ListNode* temp = slow->next;        // Save the node to be removed
        slow->next = slow->next->next;      // Remove the nth node by adjusting pointers
        delete temp;                       // Free the memory of the removed node

        return dummy.next;  // Return the updated head of the linked list
            
    }
};
