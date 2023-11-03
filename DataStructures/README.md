## Reverse a Linked List	(EASY)

### Referred Video Link : https://www.youtube.com/watch?v=G0_I-ZF0S38&ab_channel=NeetCode

[![Watch the video](https://img.youtube.com/vi/G0_I-ZF0S38/maxresdefault.jpg)](https://www.youtube.com/watch?v=G0_I-ZF0S38&ab_channel=NeetCode)

### Problem Statement
You are given the head of a singly linked list. Your task is to reverse the list and return the reversed list.
### Example
Input:
head = [1,2,3,4,5]
Output:
[5,4,3,2,1]
Input:
head = [1,2]
Output:
[2,1]
Input:
head = []
Output:
[]
### Constraints
The number of nodes in the list is in the range [0, 5000].
The values of the nodes are in the range of -5000 to 5000.

### Solution

Iterative Approach Explanation:

We initialize two pointers, prev and current. prev is initially set to nullptr, which signifies the end of the reversed list, and current is set to the head of the original list.

We start a loop that iterates through the original linked list. This loop continues until the current pointer reaches the end of the list, which is indicated by current being nullptr.

Within each iteration of the loop:

We store the reference to the next node in the original list in a temporary pointer called next_node. This is done to prevent losing the reference to the next node when we reverse the link between current and prev.
We reverse the link of the current node by pointing its next reference to the prev node. This effectively makes the current node the new "end" of the reversed list, and prev becomes the previous node to current.
We then move the prev pointer to the current node (since it's now the new "end" of the reversed list), and the current pointer to the next_node (the next node in the original list).
After the loop finishes, the prev pointer will be pointing to the new head of the reversed list because it's the last node encountered in the original list. The original head, which was pointing to nullptr at the end of the loop, will be pointing to the new end of the reversed list.

Finally, we return the prev pointer as the new head of the reversed list.

Time Complexity:

The time complexity of this iterative solution is O(n), where 'n' is the number of nodes in the linked list. This is because the algorithm iterates through the entire list once, visiting each node exactly once.

Space Complexity:

The space complexity is O(1), meaning the algorithm uses a constant amount of extra space. This space is used for the prev, current, and next_node pointers, and it doesn't depend on the size of the input linked list.

## Detect Cycle in a Linked List (EASY)
### Referred Video Link : [https://www.youtube.com/watch?v=G0_I-ZF0S38&ab_channel=NeetCode](https://www.youtube.com/watch?v=gBTe7lFR3vc&t=577s&ab_channel=NeetCode)


### Problem Statement
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

### Examples
Example 1:
Input:
head = [3,2,0,-4], pos = 1
Output:
true
Explanation:
There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:
Input:

head = [1,2], pos = 0
Output:

true
Explanation:

There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:
Input:

head = [1], pos = -1
Output:

false
Explanation:

There is no cycle in the linked list.

### Constraints
The number of nodes in the list is in the range [0, 10^4].
-10^5 <= Node.val <= 10^5
pos is -1 or a valid index in the linked-list.


### Solution

To determine whether a linked list has a cycle, we create a class for the solution. We start by checking if the linked list is empty or has only one node; in such cases, we return false as there can be no cycle. Next, we employ two pointers, a slow pointer and a fast pointer, both initialized at the head of the list. We iterate through the list in a loop where the fast pointer advances two steps at a time while the slow pointer moves one step at a time. If there is a cycle, the two pointers will eventually meet. If the fast pointer reaches the end of the list without meeting the slow pointer, it confirms the absence of a cycle, and we return false. This algorithm has a time complexity of O(n), with n being the number of nodes in the linked list, and it operates with a space complexity of O(1), using only a constant number of pointers and integer variables, making it an efficient approach for detecting cycles in a linked list.

Time Complexity
The time complexity of this algorithm is O(n), where n is the number of nodes in the linked list. The primary factor contributing to this time complexity is the while loop that traverses the linked list.

In the worst case, where there is no cycle, the while loop iterates through all n nodes exactly once. If there is a cycle, the loop still iterates through all the nodes at most twice. This is because the slow pointer moves one step at a time, and the fast pointer moves two steps at a time, and they will meet after at most two cycles of the loop. Therefore, the time complexity is O(n).

Space Complexity
The space complexity of this algorithm is O(1), which means it uses constant space. The space used by the algorithm does not depend on the size of the input linked list but remains constant throughout the execution. The algorithm uses only a constant number of pointers (slow and fast) and a few integer variables. It doesn't use any additional data structures that grow with the input size.

Overall, this algorithm is efficient both in terms of time complexity and space complexity, making it a suitable approach for detecting cycles in a linked list, as required in the problem statement.
