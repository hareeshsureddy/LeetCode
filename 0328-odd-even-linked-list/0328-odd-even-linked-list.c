/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* oddEvenList(struct ListNode* head) {
    if(!head) return head;
    struct ListNode* odd=head;
    struct ListNode* temp;
    struct ListNode* even=head->next;
    temp=even;
    while(temp){
        if(temp->next==NULL) break;
        odd->next=temp->next;
        odd=odd->next;
        if(temp->next->next==NULL){
            temp->next=NULL;
             break;
        }
        else{
        temp->next=temp->next->next;
        temp=temp->next;
        }
    }
    odd->next=even;
    return head;
}