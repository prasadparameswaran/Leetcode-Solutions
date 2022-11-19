/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
typedef struct TreeNode* node;

struct TreeNode* addOneRow(struct TreeNode* root, int val, int d){

    if(d == 1){
        node a;
        a =  (node) malloc(sizeof(struct TreeNode));
        a->val = val;
        a->left = root;
        a->right = NULL;
        return a;
    }

    node currentd[5000];
    node nextd[5000];

    currentd[0] = root;
    nextd[0] = root;
    int n = 1;
    int idx,i;

    
    for(int j = 1; j < d-1; j++){
        idx = 0;
        for(i = 0; i < n ; i++){
            
            if (currentd[i]->left != NULL){
                nextd[idx++] = currentd[i]->left;
            }
            if (currentd[i]->right != NULL){
                nextd[idx++] = currentd[i]->right;
            }    
        }
        for(i =0; i < idx; i++){
            currentd[i] = nextd[i];
        }
        n = idx;
    }
    
    for(int i = 0; i < n; i++){
        
        if (nextd[i] != NULL){
            node curr,leftch,rtch;
            leftch = (node) malloc(sizeof(struct TreeNode));
            rtch = (node) malloc(sizeof(struct TreeNode));
            curr = nextd[i];
            leftch->val = val;
            leftch->left = curr->left;
            leftch->right = NULL;
            rtch->val = val;
            rtch->right = curr->right;
            rtch->left = NULL;
            curr->left = leftch;
            curr->right = rtch;
        } 
    }
    return root;
}