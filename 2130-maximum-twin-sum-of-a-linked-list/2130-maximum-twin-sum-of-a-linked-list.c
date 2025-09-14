/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*
int pairSum(struct ListNode* head) {
   struct ListNode* temp1=head;
   struct ListNode* temp2=head;
   int idx=0;
   while( temp2 && temp2->next){
       temp1=temp1->next;
       temp2=temp2->next->next;
       idx++;
   }
   int *twin=(int*)malloc(sizeof(int)*idx);
   temp2=head;
   int i=idx-1;
   while(temp1){
       twin[i--]=temp1->val;
       temp1=temp1->next;
   }
   int max=0;
   for(int i=0;i<idx;i++){
       int num=(temp2->val+twin[i]);
       if(max<num) max=num;
       temp2=temp2->next;
   }
   return max;
} */

struct ListNode* findMiddle(struct ListNode* head){
   struct ListNode* temp1=head;
   struct ListNode* temp2=head;
   while( temp2 && temp2->next){
       temp1=temp1->next;
       temp2=temp2->next->next;
   }
    return temp1;
}

struct ListNode* reverseLL(struct ListNode* head){
        struct ListNode* prev=NULL;
        struct ListNode* pres=NULL;
        while(head){
            pres=head->next;
            head->next=prev;
            prev=head;
            head=pres;
        }
        return prev;
}
#define MAX(a,b) (a>b)?a:b;
int pairSum(struct ListNode* head) {
        struct ListNode* mid=findMiddle(head);
        mid=reverseLL(mid);
        int max=0;
        while(mid){
            int sum=head->val+mid->val;
            max=MAX(max,sum);
            head=head->next;
            mid=mid->next;
        }
        return max;
}