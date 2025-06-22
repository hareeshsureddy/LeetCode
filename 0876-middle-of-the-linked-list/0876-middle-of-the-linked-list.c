/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int len=0;
    struct ListNode* temp=head;
    while(temp){
        len++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<len/2;i++) temp=temp->next;
    return temp;
}