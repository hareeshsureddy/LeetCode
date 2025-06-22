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
    }else if(len==2){
        head->next=NULL;
        return head;
    }
    temp=head;
    int index=0;
    while(temp){
        if(index==len/2){
            temp->val=temp->next->val;
            temp->next=temp->next->next;
            return head;
        }else
        temp=temp->next;
        index++;
    }
    return head;
}