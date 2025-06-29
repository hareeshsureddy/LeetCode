/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* temp1=head;
    while(temp1 && temp1->next){
        int temp=temp1->val;
        temp1->val=temp1->next->val;
        temp1->next->val=temp;
        temp1=temp1->next;
        if(temp1)
        temp1=temp1->next;
    }
    return head;
}