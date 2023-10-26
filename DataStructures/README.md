## Reverse a Linked List	
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
