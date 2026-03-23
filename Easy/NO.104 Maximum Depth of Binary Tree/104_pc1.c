/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if(root == NULL){//if not exist then return 0
        return 0;
    }
    //return the larger height use recursion

    int left_height = maxDepth(root -> left);
    int right_height = maxDepth(root -> right);
    if (left_height > right_height){
        return left_height+1;
    }
    else return right_height+1;
    
}
