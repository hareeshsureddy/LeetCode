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

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    l1=reverseLL(l1);
    l2=reverseLL(l2);
    int sum=0,carry=0,num1,num2;
    sum=l1->val+l2->val;
    carry=sum/10;
    struct ListNode* Temp=malloc(sizeof(struct ListNode));
    Temp->val=sum%10;
    Temp->next=NULL;
    l1=l1->next;
    l2=l2->next;
    struct ListNode* Temp1=Temp;
    while(l1 || l2){
        num1=(l1!=NULL)?l1->val:0;
        num2=(l2!=NULL)?l2->val:0;
        sum=num1+num2+carry;
        carry=sum/10;
        Temp1=AddingNode_atEnd_1(Temp1,sum%10);
        l1=(l1!=NULL)?l1->next:NULL;
        l2=(l2!=NULL)?l2->next:NULL;
    }
    if (carry)
    Temp1=AddingNode_atEnd_1(Temp1,carry%10);
    
    return reverseLL(Temp);;
}
