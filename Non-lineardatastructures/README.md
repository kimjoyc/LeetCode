## Invert/Flip Binary Tree	
### Problem Statement
Given the root of a binary tree, invert the tree, and return its root. The task involves swapping the left and right subtrees of each node in the binary tree.
### Solution
The problem is approached with a direct recursive strategy: if the root is null, return null; otherwise, swap the left and right subtrees of the current node, recursively invert the left and right subtrees, and return the root of the inverted tree. The C++ implementation utilizes the TreeNode structure to represent binary tree nodes, and the Solution class contains the invertTree function for the inversion. The time complexity is O(n), where n is the number of nodes, and the space complexity is O(h), where h is the height of the binary tree. Recursive calls contribute to space complexity, with a constant amount used for the temporary variable during the inversion process.

## Validate Binary Search Tree	
### Problem Statement
Given the root of a binary tree, determine if it is a valid binary search tree (BST). A valid BST ensures that the left subtree of a node contains only values less than the node's value, the right subtree contains only values greater than the node's value, and both left and right subtrees are also valid BSTs.
### Solution
The provided C++ solution determines whether a given binary tree is a valid binary search tree (BST). It employs a recursive approach to traverse the tree, checking if each node's value falls within specific bounds. The function isValidBST utilizes a helper function, isValidBSTHelper, which recursively validates the left and right subtrees. The bounds are updated during traversal, ensuring that each node adheres to the BST conditions. The time complexity is O(n), where n is the number of nodes, and the space complexity is O(n) in the worst case due to the recursion stack. The solution leverages the numeric_limits<long>::min() and numeric_limits<long>::max() to represent negative infinity and positive infinity, respectively, to handle initial and updated bounds.






