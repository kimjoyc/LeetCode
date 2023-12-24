# Week 3 - Non-linear data structures
Familiarity with non-linear data structures, including trees, graphs, and heaps, is essential. Additionally, knowledge of tree traversal algorithms (in-order, pre-order, post-order) and graph traversal algorithms (breadth-first search, depth-first search) is required.


## Invert/Flip Binary Tree	
### Problem Statement
Given the root of a binary tree, invert the tree, and return its root. The task involves swapping the left and right subtrees of each node in the binary tree.
### Solution
The problem is approached with a direct recursive strategy: if the root is null, return null; otherwise, swap the left and right subtrees of the current node, recursively invert the left and right subtrees, and return the root of the inverted tree. The C++ implementation utilizes the TreeNode structure to represent binary tree nodes, and the Solution class contains the invertTree function for the inversion.
### Complexity Analysis
The time complexity is O(n), where n is the number of nodes, and the space complexity is O(h), where h is the height of the binary tree. Recursive calls contribute to space complexity, with a constant amount used for the temporary variable during the inversion process.

## Validate Binary Search Tree	
### Problem Statement
Given the root of a binary tree, determine if it is a valid binary search tree (BST). A valid BST ensures that the left subtree of a node contains only values less than the node's value, the right subtree contains only values greater than the node's value, and both left and right subtrees are also valid BSTs.
### Solution
The provided C++ solution determines whether a given binary tree is a valid binary search tree (BST). It employs a recursive approach to traverse the tree, checking if each node's value falls within specific bounds. The function isValidBST utilizes a helper function, isValidBSTHelper, which recursively validates the left and right subtrees. The bounds are updated during traversal, ensuring that each node adheres to the BST conditions.The solution leverages the numeric_limits<long>::min() and numeric_limits<long>::max() to represent negative infinity and positive infinity, respectively, to handle initial and updated bounds.
### Complexity Analysis
The time complexity is O(n), where n is the number of nodes, and the space complexity is O(n) in the worst case due to the recursion stack.

## Non-overlapping Intervals	
### Problem Statement
The problem requires finding the minimum number of intervals to remove from a given array in order to make the remaining intervals non-overlapping. Each interval is represented as a pair [start, end], and the goal is to optimize for non-overlapping intervals. The task involves implementing a solution in C++ within the eraseOverlapIntervals function of the Solution class.
### Solution
The provided C++ solution addresses the problem of finding the minimum number of intervals to remove in order to make the remaining intervals non-overlapping. Utilizing a greedy algorithm, the solution sorts the intervals based on their end points, optimizing for the inclusion of intervals with smaller end points. Subsequently, a single pass through the sorted intervals determines overlapping intervals, allowing for their removal. The provided C++ code is encapsulated within a Solution class and includes a member function eraseOverlapIntervals that takes a vector of intervals as input and returns the minimum number of intervals to remove.
### Complexity Analysis
The algorithm's time complexity is O(N log N), primarily attributed to the sorting step, where N is the number of intervals. In terms of space complexity, the solution is efficient with O(1) space requirements, as the sorting is performed in-place, and the additional space used remains constant. 

## Construct Binary Tree from Preorder and Inorder Traversal	
### Problem Statement
Given preorder and inorder arrays representing a binary tree's preorder and inorder traversals, the task is to construct and return the corresponding binary tree.
### Solution
The buildTreeHelper algorithm constructs a binary tree from given preorder and inorder traversals. It begins by selecting the first element in the preorder array as the root for the current subtree and then locates the index of this root value in the inorder array to delineate the left and right subtrees. After determining the size of the left subtree, the algorithm recursively builds both left and right subtrees by updating the ranges in both the preorder and inorder arrays. The process continues until the base case is reached, signifying an empty subtree. The function returns the root of the constructed binary tree, ensuring accurate traversal reconstruction. 
### Complexity Analysis
The time complexity is O(N log N) on average and O(N^2) in the worst case, where N is the number of nodes in the binary tree. The linear search in the inorder array for each node contributes to the time complexity, while the space complexity is O(N), determined by the maximum depth of the recursive call stack corresponding to the tree's height.

## Top K Frequent Elements	
### Problem Statement
Given an integer array nums and an integer k, the task is to find and return the k most frequent elements from the array. The solution should return the answer in any order. The constraints include the length of the array nums being between 1 and 105, the values of elements in the array falling within the range -104 to 104, and k being in the range [1, the number of unique elements in the array]. It is guaranteed that the result is unique. Additionally, the algorithm is required to achieve a time complexity better than O(n log n), where n is the size of the array.
### Solution
The solution aims to find the k most frequent elements in the given array nums. It employs a two-step process, beginning with the creation of a frequency map (freqMap) using an unordered map to store the occurrences of each element. Subsequently, a min-heap (priority queue) is utilized to efficiently track the k most frequent elements, with sorting based on element frequency facilitated by a custom comparator defined through a lambda function. The algorithm populates the min-heap with the first k elements from the frequency map, ensuring the size constraint by removing the least frequent element when necessary. 
### Complexity Analysis 
The overall time complexity is O(n + u * log(k)), where n is the input array's size, u is the number of unique elements, and k is the size of the min-heap. The space complexity is O(u + k), with O(u) space required for storing the frequency map, O(k) for the min-heap, and O(k) for the result vector. This approach optimizes time complexity, ensuring a better-than-O(n log n) performance.

## Clone Graph	
### Problem Statement
In this problem, the task is to create a deep copy of a connected undirected graph represented by a given node reference. Each graph node has an integer value and a list of neighbors. The graph is represented using an adjacency list, and the goal is to return a cloned graph. The adjacency list contains information about the neighbors of each node.
### Solution
The algorithm employs depth-first search (DFS) to clone a connected undirected graph represented by a Node class. It checks for null input, verifies if a node has been cloned to avoid redundancy, and creates a new node if needed. The algorithm recursively clones neighbors, adding them to the neighbors vector of the newly created node. The process, tracked by a clonedNodes HashMap, continues until the entire graph is traversed, producing a deep copy of the original graph.
### Complexity Analysis 
The solution employs a DFS approach to clone a connected undirected graph with a time complexity of O(V + E), where V is the number of nodes and E is the number of edges. DFS ensures each node and edge are visited once, and the cloning process, taking O(V) time, creates a deep copy of nodes and their neighbors. The space complexity, O(V), is mainly due to the HashMap (clonedNodes) storing the mapping between original and cloned nodes, along with the DFS recursion stack. This efficient solution prevents duplication, ensuring accurate cloning of each node and its neighbors.






















