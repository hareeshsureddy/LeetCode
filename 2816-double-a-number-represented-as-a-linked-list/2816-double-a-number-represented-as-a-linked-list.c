/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* AddingNode_atEnd_1(struct ListNode *ptr,int data){
    struct ListNode *temp=malloc(sizeof(struct ListNode));
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->val=data;
    temp->next=NULL;
    return temp;
}

struct ListNode* reverseLL(struct ListNode* head){
    struct ListNode* Next=NULL;
    struct ListNode* Prev=NULL;
    while(head){
        Next=head->next;
        head->next=Prev;
        Prev=head;
        head=Next;
    }
    return Prev;
}

struct ListNode* doubleIt(struct ListNode* l1) {
    l1=reverseLL(l1);
    int sum=0,carry=0,num1,num2;
    sum=l1->val*2;
    carry=sum/10;
    struct ListNode* Temp=malloc(sizeof(struct ListNode));
    Temp->val=sum%10;
    Temp->next=NULL;
    l1=l1->next;
    struct ListNode* Temp1=Temp;
    while(l1){
        num1=l1->val*2;
        sum=num1+carry;
        carry=sum/10;
        Temp1=AddingNode_atEnd_1(Temp1,sum%10);
        l1=l1->next;
    }
    if (carry)
    Temp1=AddingNode_atEnd_1(Temp1,carry%10);

    return reverseLL(Temp);;
}
