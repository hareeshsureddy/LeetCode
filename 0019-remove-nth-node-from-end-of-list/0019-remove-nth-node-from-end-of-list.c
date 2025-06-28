/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int len=0;
    struct ListNode* temp=head;
    struct ListNode* temp1=head;
    while(temp){
        len++;
        temp=temp->next;
    }
    if(len==1) return NULL;
    temp=head;
    len-=n;
    n=len;
    len=0;
    while(temp){
        if(len==n){
            if(temp->next){
            temp->val=temp->next->val;
            temp->next=temp->next->next;
            }else{
                temp1->next=NULL;
            }
        }
        len++;
        temp1=temp;
        temp=temp->next;
    }
    return head;
}