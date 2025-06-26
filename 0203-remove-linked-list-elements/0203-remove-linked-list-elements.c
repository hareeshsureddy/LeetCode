/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* temp=head;
    struct ListNode* temp1=NULL;
    while(temp){
        if(temp->val==val){
            if (temp->next!=NULL){
                temp->val=temp->next->val;                
                temp->next=temp->next->next;
                continue;
            }else{
              if (temp1!=NULL)  
                temp1->next=NULL;
                else
                return NULL;
            }
        }
        temp1=temp;
        temp=temp->next;
    }
    return head;
}