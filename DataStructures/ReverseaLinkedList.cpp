/*

206. Reverse Linked List
Easy
Topics
Companies
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Example 2:


Input: head = [1,2]
Output: [2,1]
Example 3:

Input: head = []
Output: []
 

Constraints:

The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000
 

Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?

*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr; // Initialize a pointer to the previous node as null.
        ListNode* current = head; // Initialize a pointer to the current node as the head of the list.

        while (current) { // Start a loop to iterate through the list until current becomes null (end of the list).
            ListNode* next_node = current->next; // Store the next node in the original list.

            current->next = prev; // Reverse the link by pointing the current node to the previous node.

            prev = current; // Move prev to the current node.
            current = next_node; // Move current to the next node in the original list.
        }

        return prev; // Return the new head, which is now the last node in the original list (reversed list).
    }
};
/*
Iterative Approach:

Time Complexity: O(n) where n is the number of nodes in the linked list. This is because the algorithm iterates through the entire list once.
Space Complexity: O(1) because the algorithm uses a constant amount of extra space for the prev, current, and next_node pointers, regardless of the size of the input linked list.
*/
