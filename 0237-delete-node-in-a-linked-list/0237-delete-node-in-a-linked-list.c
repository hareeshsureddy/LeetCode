/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    //T.C  O(1)
    node->val=node->next->val;
   // if(node->next->next==NULL)
   // node->next=NULL;
    //else
    node->next=node->next->next;
    /* //T.C  O(n)
    while(node->next->next!=NULL){
        node->val=node->next->val;
        node=node->next;
    }
    node->val=node->next->val;
    node->next=NULL;
    */
}