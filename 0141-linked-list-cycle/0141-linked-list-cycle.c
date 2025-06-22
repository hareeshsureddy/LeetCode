/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head){
    struct ListNode *ptr1=head->next;    
    struct ListNode *ptr2=head->next; 
    while(ptr1!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
     if(ptr1==ptr2) return true;
    }
    }
    return  false;
}