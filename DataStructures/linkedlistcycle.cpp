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
Time Complexity:
The time complexity of this algorithm is O(n), where n is the number of nodes in the linked list. The primary factor contributing to this time complexity is the while loop that traverses the linked list.

In the worst case, where there is no cycle, the while loop iterates through all n nodes exactly once. If there is a cycle, the loop still iterates through all the nodes at most twice. This is because the slow pointer moves one step at a time, and the fast pointer moves two steps at a time, and they will meet after at most two cycles of the loop. Therefore, the time complexity is O(n).

Space Complexity:
The space complexity of this algorithm is O(1), which means it uses constant space. The space used by the algorithm does not depend on the size of the input linked list but remains constant throughout the execution. The algorithm uses only a constant number of pointers (slow and fast) and a few integer variables. It doesn't use any additional data structures that grow with the input size.

Overall, this algorithm is efficient both in terms of time complexity and space complexity, making it a suitable approach for detecting cycles in a linked list, as required in the problem statement.
*/
