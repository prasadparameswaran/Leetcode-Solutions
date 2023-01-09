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
/* The solution calculate(function calcHt) the left and right height at each node. 
The calcHt function returns -1 if the balance of any node is viodated. 
Time = O(n) Space = O(height of tree)
*/ 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==nullptr) return true;
        int leftheight = calcHt(root->left);
        int rightheight = calcHt(root->right);
        if(leftheight < 0 || rightheight < 0) return false;
        return abs(leftheight-rightheight)<2;
    }
    int calcHt(TreeNode* node){
        if(node == nullptr) return 0; 
        if(node->right == nullptr && node->left == nullptr) return 1;
        int x = calcHt(node->left);
        int y = calcHt(node->right);
        if(x < 0 || y < 0 || abs(x-y)>1) return -1;
        return max(x,y)+1;
    }
};
