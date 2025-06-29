/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
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
            return head;
            }else{
                temp1->next=NULL;
                return head;
            }
        }
        len++;
        temp1=temp;
        temp=temp->next;
    }
    return head;
}
*/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
        struct ListNode* fast=head;
        struct ListNode* slow=NULL;
        struct ListNode* temp;
        if(n==1){
            while(fast->next){
                slow=fast;
                fast=fast->next;
            }
            if(!slow) return NULL;
            slow->next=NULL;
            return head;
        }
        for (int i=1;i<n;i++){
            fast=fast->next;
        }
        if(!fast->next) return head->next;
        slow=head;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        if(n==1) {
            slow->next=NULL;
            return head;
        }
         slow->val=slow->next->val;
         slow->next=slow->next->next;
         return head;
}