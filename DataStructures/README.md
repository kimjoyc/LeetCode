## Reverse a Linked List	(EASY)

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



## Container With Most Water (MED)
### Relevant Video Link: https://www.youtube.com/watch?v=UuiTKBwPgAo&t=3s&ab_channel=NeetCode

### Problem Statement
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Your task is to find two lines that, together with the x-axis, form a container, such that the container contains the most water. You need to return the maximum amount of water that the container can store.

It's important to note that you may not slant the container, which means the lines must be vertical.

### Example
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by the array [1,8,6,2,5,4,8,3,7]. In this case, the maximum area of water (blue section) the container can contain is 49.

Input: height = [1,1]
Output: 1
### Constraints
n == height.length
2 <= n <= 105
0 <= height[i] <= 104
### Solution
The provided solution is a C++ function maxArea that takes a reference to a vector of integers height as input. It uses a two-pointer approach to find the maximum area by considering the height and width of the container formed by two lines.
Initialize a variable maxArea to store the maximum area found so far.
Initialize two pointers, left and right, to point to the start and end of the vector, respectively.
Enter a while loop that continues until left is less than right.
Calculate the height of the container h as the minimum of heights at left and right.
Calculate the width of the container width as the difference between right and left.
Calculate the area of the container by multiplying h and width, and update maxArea with the maximum value seen so far.
Move the pointers: If the height at left is less than the height at right, move the left pointer one step to the right; otherwise, move the right pointer one step to the left.
Repeat steps 4-7 until the pointers meet.
The time complexity of this solution is O(n) as it iterates through the array only once, and the space complexity is O(1) since it uses a constant amount of extra space.
In summary, this solution provides an efficient and optimal way to find the maximum water container area.


## Find Minimum in Rotated Sorted Array (MED)
### Relevant Video Link: [https://www.youtube.com/watch?v=UuiTKBwPgAo&t=3s&ab_channel=NeetCode
](https://www.youtube.com/watch?v=nIVW4P8b1VA)
### Problem Statement
Suppose you have an array of unique elements that is sorted in ascending order but has been rotated between 1 and n times. For example, the array nums might look like:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
You need to find and return the minimum element in this rotated array.

### Example
Example 1:

Input: nums = [3,4,5,1,2]

Output: 1

Explanation: The original array was [1,2,3,4,5] rotated 3 times.

Example 2:

Input: nums = [4,5,6,7,0,1,2]

Output: 0

Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

Example 3:

Input: nums = [11,13,15,17]

Output: 11

Explanation: The original array was [11,13,15,17] and it was rotated 4 times.

### Constraints
n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
All the integers in nums are unique.
nums is sorted and rotated between 1 and n times.
### Solution 
We use a binary search algorithm to efficiently find the minimum element in the rotated sorted array. The key steps are as follows:

Initialize the result variable to the first element of the array.
Initialize left and right pointers to the beginning and end of the array, respectively.
While the left pointer is less than or equal to the right pointer, perform the following steps:
If the values at the left and right pointers indicate that the subarray is already sorted, update the result with the minimum value and break the loop.
Calculate the middle index as the average of the left and right pointers.
Update the result with the minimum of the current result and the middle value.
Determine which side of the rotation we are on (left or right) based on the middle value.
Adjust the left or right pointer accordingly to continue the search.
Return the minimum value found in the rotated or sorted array.
Time Complexity
The time complexity of this solution is O(log n) because it uses a binary search algorithm. In each step of the binary search, the search space is effectively halved, resulting in a logarithmic time complexity.

Space Complexity
The space complexity is O(1), which means it uses a constant amount of extra space regardless of the input array size. It only uses a few integer variables and does not depend on the size of the input array. There are no additional data structures or significant memory usage.

In summary, this algorithm efficiently finds the minimum element in a sorted or rotated sorted array with a time complexity of O(log n) and a space complexity of O(1).
