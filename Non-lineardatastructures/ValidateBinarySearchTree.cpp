/*
98. Validate Binary Search Tree
Medium
Topics
Companies
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left 
subtree
 of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:


Input: root = [2,1,3]
Output: true
Example 2:


Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1

*/
class Solution {
public:
    // Function to check if a binary tree is a valid BST
    bool isValidBST(TreeNode* root) {
        // Call the helper function with initial bounds of negative infinity and positive infinity
        return isValidBSTHelper(root, numeric_limits<long>::min(), numeric_limits<long>::max());
    }

private:
    // Helper function to check if a binary tree is a valid BST within specified bounds
    bool isValidBSTHelper(TreeNode* root, long lower, long upper) {
        // Base case: if the current node is null, it's a valid BST
        if (!root) {
            return true;
        }

        // Check if the current node's value is within the valid range
        if (root->val <= lower || root->val >= upper) {
            return false;
        }

        // Recursively check the left subtree with updated upper limit
        // Recursively check the right subtree with updated lower limit
        return isValidBSTHelper(root->left, lower, root->val) && isValidBSTHelper(root->right, root->val, upper);
    }
};
