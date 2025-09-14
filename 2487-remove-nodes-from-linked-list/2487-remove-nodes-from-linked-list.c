/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* reverseLL(struct ListNode* head){
             struct ListNode* next=NULL;
              struct ListNode* prev=NULL;
              while(head){
                next=head->next;
                head->next=prev;
                prev=head;
                head=next;
              }
              return prev;
 }
 struct ListNode* removeNodes(struct ListNode* head) {
            head=reverseLL(head);
            int max=0;
             struct ListNode* temp=head;
             max=temp->val;
            struct ListNode* prev=temp;
             temp=temp->next;
            while(temp){
                if(temp->val<max){
                    if(temp->next){
                    temp->val=temp->next->val;
                    temp->next=temp->next->next;
                    }else{
                        prev->next=NULL;
                        temp=NULL;
                    }
                }else{
                    max=temp->val;
                    temp=temp->next;
                    prev=prev->next;
                }
            }
           return reverseLL(head);
 }

 /*
struct Tag {
    int val;
    int index;
};
static struct Tag ArrData[100000];

int compare(const void *a,const void *b){
    return ((struct Tag*)b)->val-((struct Tag*)a)->val;
}
struct ListNode* removeNodes(struct ListNode* head) {
    int index=0;
    struct ListNode* temp=head;
    while(temp){
        ArrData[index].val=temp->val;
        ArrData[index].index=index++;
        temp=temp->next;
    }
    qsort(ArrData,index,sizeof(struct Tag),compare);
    temp=head;
    temp->val=ArrData[0].val;
    for(int i=1;i<index;i++){
        if(ArrData[i-1].index>ArrData[i].index) break;
        temp=temp->next;
        temp->val=ArrData[i].val;
    }
    temp->next=NULL;
    return head;
}*/