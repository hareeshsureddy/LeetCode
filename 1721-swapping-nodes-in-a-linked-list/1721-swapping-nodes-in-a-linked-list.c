/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* temp=head;
    struct ListNode* temp1=head;
    struct ListNode* temp2=head;
    while(--k){
        temp=temp->next;
    }
    temp1=temp;
    while(temp->next){
        temp=temp->next;
        temp2=temp2->next;
    }
    int tempVal=temp1->val;
    temp1->val=temp2->val;
    temp2->val=tempVal;
    return head;
}