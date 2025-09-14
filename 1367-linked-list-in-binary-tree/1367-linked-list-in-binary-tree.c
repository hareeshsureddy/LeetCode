/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

 bool check(struct ListNode* head, struct TreeNode* root){
    if(head == NULL) return true;
    if(root == NULL) return false;

    if (head->val!=root->val) return false;
    return check(head->next,root->left)||
           check(head->next,root->right);
 }
bool isSubPath(struct ListNode* head, struct TreeNode* root) {
        if(root == NULL) return false;

        return check(head,root)||
               isSubPath(head,root->left)||
               isSubPath(head,root->right);
}