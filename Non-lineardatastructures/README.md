## Invert/Flip Binary Tree	
### Problem Statement
Given the root of a binary tree, invert the tree, and return its root. The task involves swapping the left and right subtrees of each node in the binary tree.
### Solution
The problem is approached with a direct recursive strategy: if the root is null, return null; otherwise, swap the left and right subtrees of the current node, recursively invert the left and right subtrees, and return the root of the inverted tree. The C++ implementation utilizes the TreeNode structure to represent binary tree nodes, and the Solution class contains the invertTree function for the inversion. The time complexity is O(n), where n is the number of nodes, and the space complexity is O(h), where h is the height of the binary tree. Recursive calls contribute to space complexity, with a constant amount used for the temporary variable during the inversion process.





