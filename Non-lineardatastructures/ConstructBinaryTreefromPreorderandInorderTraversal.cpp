/*
105. Construct Binary Tree from Preorder and Inorder Traversal
Medium
Topics
Companies
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

 

Example 1:


Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: preorder = [-1], inorder = [-1]
Output: [-1]
 

Constraints:

1 <= preorder.length <= 3000
inorder.length == preorder.length
-3000 <= preorder[i], inorder[i] <= 3000
preorder and inorder consist of unique values.
Each value of inorder also appears in preorder.
preorder is guaranteed to be the preorder traversal of the tree.
inorder is guaranteed to be the inorder traversal of the tree
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTreeHelper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }

private:
    TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd,
                              vector<int>& inorder, int inStart, int inEnd) 
    {
        // Base case: empty subtree
        if (preStart > preEnd || inStart > inEnd) 
        {
            return nullptr;
        }

        // The first element in preorder is the root of the current subtree
        int rootValue = preorder[preStart];
        TreeNode* root = new TreeNode(rootValue);

        // Find the index of the root value in inorder
        int rootIndex = inStart;
        while (inorder[rootIndex] != rootValue) 
        {
            rootIndex++;
        }

        // Calculate the size of left subtree
        int leftSubtreeSize = rootIndex - inStart;

        // Recursively build left and right subtrees
        root->left = buildTreeHelper(preorder, preStart + 1, preStart + leftSubtreeSize,
                                    inorder, inStart, rootIndex - 1);
        root->right = buildTreeHelper(preorder, preStart + leftSubtreeSize + 1, preEnd,
                                    inorder, rootIndex + 1, inEnd);

        return root;
    }

    
};
