/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 static int arr1[201];
struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* temp=head;
    int idx1=0,idx2=200;
    while(temp){
        if(temp->val<x){
            arr1[idx1++]=temp->val;
        }else{
            arr1[idx2--]=temp->val;
        }
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<idx1;i++){
        temp->val=arr1[i];
        temp=temp->next;
    }
    for(int i=200;i>idx2;i--){
        temp->val=arr1[i];
        temp=temp->next;
    }
    return head;
}