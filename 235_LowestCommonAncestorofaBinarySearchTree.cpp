/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 // solution based on BST properties. Recursion can be used instead of loop also. time = O(log n) space = O(1)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* lca = root;
        while(lca){
            if(lca->val == p->val || lca->val == q->val) return lca;
            else if(lca->val > p->val && lca->val > q->val) lca = lca->left;
            else if(lca->val < p->val && lca->val < q->val) lca = lca->right;
            else return lca;
        }
        return lca;
    }
};