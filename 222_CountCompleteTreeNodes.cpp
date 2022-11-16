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
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        // compute left and the right height. if they are equal return the number of nodes i.e 2^h-1. Else recursively call the function on children
        TreeNode*  nextNode= root;
        int lh,rh;
        lh = rh = 0;
        //left ht
        while(nextNode){
            lh++;
            nextNode =  nextNode->left;
        }
        
        //right ht
        nextNode = root;
        while(nextNode){
            rh++;
            nextNode =  nextNode->right;
        }
        
        if(lh==rh) return int(pow(2,lh)-1);
        else return 1 + countNodes(root->left) + + countNodes(root->right);  
    }
};