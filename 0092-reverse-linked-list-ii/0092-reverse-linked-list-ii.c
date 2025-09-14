/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* reverseLL(struct ListNode* head){
    struct ListNode* Prev=NULL;
    struct ListNode* Next=NULL;
    while(head){
        Next=head->next;
        head->next=Prev;
        Prev=head;
        head=Next;
    }
    return Prev;
 }
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* head1=head;
    struct ListNode* Prev=NULL;
    struct ListNode* Next=NULL;
    left--;
    right--;
    while(left){
        left--;
        right--;
        Prev=head1; //Poninting to org LL start
        head1=head1->next;
    }
    struct ListNode* temp=head1; //Poninting to reversed LL end
    while(right){
        right--;
        head1=head1->next;
    }
    Next=head1->next; //Poninting to org LL end
    head1->next=NULL;
    head1=reverseLL(temp);  //Poninting to reversed LL head
    if(Prev)
    Prev->next=head1;
    else
    head=head1;

    if(Next)
    temp->next=Next;

    return head;
}