/*
141. Linked List Cycle
Easy
Topics
Companies
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:


Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
Example 2:


Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:


Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
 

Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
 

Follow up: Can you solve it using O(1) (i.e. constant) memory?
*/

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false; // No cycle if the list is empty or has only one node.
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Move slow one step.
            fast = fast->next->next; // Move fast two steps.

            if (slow == fast) {
                return true; // If slow and fast meet, there is a cycle.
            }
        }

        return false; // If fast reaches the end, there is no cycle.
    }
};

int main() {
    // Create a linked list and test for a cycle.
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Create a cycle

    Solution solution;
    bool hasCycle = solution.hasCycle(head);

    if (hasCycle) {
        std::cout << "The linked list has a cycle." << std::endl;
    } else {
        std::cout << "The linked list does not have a cycle." << std::endl;
    }

    return 0;
}
In this code, the hasCycle function uses two pointers, slow and fast, to traverse the linked list. If there's a cycle, they will meet at some point. If there's no cycle, the fast pointer will reach the end of the list, and the function will return false.




User
comment each line of code
ChatGPT
Sure, here's the code with comments explaining each line:

cpp
Copy code
#include <iostream>

// Define a struct for a singly-linked list node.
struct ListNode {
    int val;          // Value stored in the node.
    ListNode* next;   // Pointer to the next node.
    ListNode(int x) : val(x), next(nullptr) {} // Constructor to create a node with a given value.
};

// Create a class for the solution.
class Solution {
public:
    bool hasCycle(ListNode* head) {
        // Check if the linked list is empty or has only one node.
        if (head == nullptr || head->next == nullptr) {
            return false; // No cycle if the list is empty or has only one node.
        }

        ListNode* slow = head; // Initialize a slow pointer at the head of the list.
        ListNode* fast = head; // Initialize a fast pointer at the head of the list.

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Move the slow pointer one step forward.
            fast = fast->next->next; // Move the fast pointer two steps forward.

            if (slow == fast) {
                return true; // If the slow and fast pointers meet, there is a cycle.
            }
        }

        return false; // If the fast pointer reaches the end, there is no cycle.
    }
};


/*

*/
