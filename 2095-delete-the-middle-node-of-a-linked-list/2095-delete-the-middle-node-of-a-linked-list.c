/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    int len=0;
    struct ListNode* temp=head;
    while(temp){
        temp=temp->next;
        len++;
    }
    if(len==1) {
        return NULL;
    }
    temp=head;
    for(int i=0;i<len/2-1;i++) temp=temp->next;
    temp->next=temp->next->next;
    return head;
}