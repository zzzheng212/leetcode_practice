/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p && q == NULL || q && p ==NULL) return false;
    if(p == NULL && q == NULL) return true;
    if(p != NULL && q!= NULL){
        if(p->val == q->val){
            if(!isSameTree(p->left,q->left))return false;
            else if(!isSameTree(p->right,q->right)) return false;
            else return true;
        }
    }
        return 0;
}
