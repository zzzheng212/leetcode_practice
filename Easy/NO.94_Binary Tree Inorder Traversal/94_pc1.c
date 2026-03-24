/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count(struct TreeNode* root);//算節點數
void inorder(struct TreeNode* root, int *arr, int *index);
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int num = count(root);
    *returnSize = num; //記得這行
    int index = 0;
    int *array = malloc(sizeof(int) * num);
    inorder(root,array,&index);
    return array;
}
int count(struct TreeNode* root){
    if(root == NULL) return 0;
    return count(root->left) + count(root->right) + 1; 
}
void inorder(struct TreeNode* root, int *arr, int *index){
    if(root == NULL) return;
    inorder(root->left,arr,index);
    arr[*index] = root->val;
    (*index)++;
    inorder(root->right,arr,index);
}

