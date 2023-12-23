# Week 3 - Non-linear data structures
Familiarity with non-linear data structures, including trees, graphs, and heaps, is essential. Additionally, knowledge of tree traversal algorithms (in-order, pre-order, post-order) and graph traversal algorithms (breadth-first search, depth-first search) is required.


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

## Non-overlapping Intervals	
### Problem Statement
The problem requires finding the minimum number of intervals to remove from a given array in order to make the remaining intervals non-overlapping. Each interval is represented as a pair [start, end], and the goal is to optimize for non-overlapping intervals. The task involves implementing a solution in C++ within the eraseOverlapIntervals function of the Solution class.
### Solution
The provided C++ solution addresses the problem of finding the minimum number of intervals to remove in order to make the remaining intervals non-overlapping. Utilizing a greedy algorithm, the solution sorts the intervals based on their end points, optimizing for the inclusion of intervals with smaller end points. Subsequently, a single pass through the sorted intervals determines overlapping intervals, allowing for their removal. The algorithm's time complexity is O(N log N), primarily attributed to the sorting step, where N is the number of intervals. In terms of space complexity, the solution is efficient with O(1) space requirements, as the sorting is performed in-place, and the additional space used remains constant. The provided C++ code is encapsulated within a Solution class and includes a member function eraseOverlapIntervals that takes a vector of intervals as input and returns the minimum number of intervals to remove.

## Construct Binary Tree from Preorder and Inorder Traversal	
### Problem Statement
Given preorder and inorder arrays representing a binary tree's preorder and inorder traversals, the task is to construct and return the corresponding binary tree.
### Solution
The buildTreeHelper algorithm constructs a binary tree from given preorder and inorder traversals. It begins by selecting the first element in the preorder array as the root for the current subtree and then locates the index of this root value in the inorder array to delineate the left and right subtrees. After determining the size of the left subtree, the algorithm recursively builds both left and right subtrees by updating the ranges in both the preorder and inorder arrays. The process continues until the base case is reached, signifying an empty subtree. The function returns the root of the constructed binary tree, ensuring accurate traversal reconstruction. The time complexity is O(N log N) on average and O(N^2) in the worst case, where N is the number of nodes in the binary tree. The linear search in the inorder array for each node contributes to the time complexity, while the space complexity is O(N), determined by the maximum depth of the recursive call stack corresponding to the tree's height.















