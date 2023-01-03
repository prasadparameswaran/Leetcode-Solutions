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

 //Solution using BFS, iterative solution. Can be also done using recursion 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> Q;
        Q.push(root);
        while(!Q.empty()){
            TreeNode* node = Q.front();
            Q.pop();
            if(node && (node->left || node->right)){
                TreeNode* temp = node->left;
                node->left = node->right;
                node->right = temp;
                Q.push(node->left);
                Q.push(node->right);
            }
        }
        return root;
    }
};