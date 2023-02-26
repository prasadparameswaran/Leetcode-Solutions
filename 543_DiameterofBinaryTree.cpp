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

 // Diameter of a node is left height + right height. The solution calulates the dia for each node and returns the maximum forunf. T(n) = O(n). S(n) = O(n)
class Solution {
    int maxDia;
public:
    
    int diameterOfBinaryTree(TreeNode* root) {
        maxDia = 0;
        height(root);
        return maxDia;
    }
    int height(TreeNode *node){
        if(node == NULL) return 0;
        int leftHt,rtHt;
        leftHt = height(node->left);
        rtHt = height(node->right);
        maxDia = max(maxDia, leftHt+rtHt);
        return max(leftHt,rtHt) +1;
    }
};