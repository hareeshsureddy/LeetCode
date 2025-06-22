/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if(!head) return NULL;
    struct ListNode *slow=head;
    struct ListNode *fast=head;
    bool loop=false;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            loop=true;
            break;
        }
    }
     if(loop) {
        while(head!=fast){
            head=head->next;
            fast=fast->next;
        }
        return head;
     }
    return NULL;
}