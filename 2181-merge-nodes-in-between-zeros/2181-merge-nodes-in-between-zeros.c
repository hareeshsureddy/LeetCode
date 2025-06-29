/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode* result=head;
    struct ListNode* temp=head->next;
    struct ListNode* end=NULL;
    int sum=0;
    while(temp){
        if(temp->val){
            sum+=temp->val;
        }else{
            result->val=sum;
            end=result;
            result=result->next;
            sum=0;
        }
        temp=temp->next;
    }
    end->next=NULL;
    return head;
}