/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int targetSum){
    bool result = false;
    
    if ( root == NULL){
        return false;
    }
    targetSum = targetSum - root->val;
    if (targetSum ==0 && root->left == NULL && root->right == NULL){
        return true;
    }
    
    result = hasPathSum(root->left,targetSum);
    if (result == false){
        result = hasPathSum(root->right,targetSum);
    }
    return result;

}