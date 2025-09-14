/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
           struct ListNode* temp=list1;
           struct ListNode* temp1;
           while(b){
                if(a==1){
                temp1=temp;
                }
                temp=temp->next;
                b--;
                a--;
           }
           struct ListNode* temp2=list2;
           while(temp2->next){
            temp2=temp2->next;
           }
           temp2->next=temp->next;
           temp1->next=list2;
           return list1;
}