/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /* Adding a node at the end of the given linked list in an efficient way*/

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

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
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
    /*
    int num1=0,num2=0;
    int i=1;
    do{
        num1+=((l1->val)*i);
        i*=10;
        l1=l1->next;
    }while(l1);
    i=1;
    do{
        num2+=((l2->val)*i);
        i*=10;
        l2=l2->next;
    }while(l2);
    int sum=num1+num2;
    struct ListNode* Temp=malloc(sizeof(struct ListNode));
    Temp->val=sum%10;
    Temp->next=NULL;
    sum/=10;
    struct ListNode* Temp1=Temp;
    while(sum){
        Temp1=AddingNode_atEnd_1(Temp1,sum%10);
        sum/=10;
    }
    */
    return Temp;
}

/*
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyHead = malloc(sizeof(struct ListNode));
    dummyHead->val = 0;
    dummyHead->next = NULL;
    struct ListNode* curr = dummyHead;
    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry != 0) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = malloc(sizeof(struct ListNode));
        curr->next->val = sum % 10;
        curr->next->next = NULL;
        curr = curr->next;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }
    struct ListNode* result = dummyHead->next;
    free(dummyHead);  // Free the memory allocated for dummyHead
    return result;
} */