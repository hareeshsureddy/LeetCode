/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev=NULL;
    struct ListNode* next=NULL;
    while(head){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    head=prev;
    return head;
}