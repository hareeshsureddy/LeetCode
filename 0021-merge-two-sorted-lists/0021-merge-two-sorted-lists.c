/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(!list1) return list2;
    if(!list2) return list1;
    struct ListNode* head=NULL;
    struct ListNode* temp=NULL;
    if(list1->val<=list2->val )
    {
         head=list1;
        list1=list1->next;
    }
        else
        {
            head=list2;  
            list2=list2->next;
        }
    temp=head;
    while(list1 && list2){
        if(list1->val<=list2->val ){
            temp->next=list1;
            list1=list1->next;
            temp=temp->next;
        }else{
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;           
        }
    }
    while(list1){
    temp->next=list1;
    list1=list1->next;
    temp=temp->next; 
    temp->next=NULL;
    }
    while(list2){
    temp->next=list2;
    list2=list2->next;
    temp=temp->next;
    temp->next=NULL;
    }
    return head;
}