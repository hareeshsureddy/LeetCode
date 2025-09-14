/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* lenLL(struct ListNode* head){
        struct ListNode* fast=head;
        struct ListNode* slow=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    if(!fast)
    return slow;
    fast=slow->next;
    slow->next=NULL;
    return fast;
 }

struct ListNode* reverseLL(struct ListNode* head){
        struct ListNode* prev=NULL;
        struct ListNode* next=NULL;
    while(head){
        next=head->next;
        head->next=prev;
        prev=head;
        head=next;
    }
    return prev;
 }

void reorderList(struct ListNode* head) {
    struct ListNode* temp2=lenLL(head);
    temp2=reverseLL(temp2);
    struct ListNode* temp1=head;
    struct ListNode* temp=head;
    while(temp2 && temp2->next){
        temp1=temp1->next;
        temp->next=temp2;
        temp=temp->next;
        temp2=temp2->next;
        temp->next=temp1;
        temp=temp->next;
    }
    temp1=temp1->next;
    if(temp1!=temp2){
        temp->next=temp2;
        temp2->next=temp1;
    }
}