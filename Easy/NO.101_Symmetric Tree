/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool check(struct TreeNode* a, struct TreeNode* b);
bool isSymmetric(struct TreeNode* root) {
    if (root->left->val == root->right->val){
        return check(root->left,root->right);
    }
    return 0;
}
bool check(struct TreeNode* a, struct TreeNode* b){
    if(a == NULL && b == NULL) return true;
    if(a == NULL || b == NULL) return false;
    if(a->val != b->val) return false;
    return(check(a->left,b->right)&&check(a->right,b->left));//這邊遞迴
}
