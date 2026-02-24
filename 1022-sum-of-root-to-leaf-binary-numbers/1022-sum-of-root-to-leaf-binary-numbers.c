/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
static int dfs(struct TreeNode* node, int x){
    if (!node)
        return 0;
    x = (x << 1) + node->val;
    if(!node->left && !node->right)
        return x;
    return dfs(node->left, x) + dfs(node->right, x);
}
int sumRootToLeaf(struct TreeNode* root) {
    return dfs(root, 0);
}