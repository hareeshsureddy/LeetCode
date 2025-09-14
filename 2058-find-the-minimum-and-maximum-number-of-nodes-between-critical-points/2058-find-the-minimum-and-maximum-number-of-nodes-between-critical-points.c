/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nodesBetweenCriticalPoints(struct ListNode* head, int* returnSize) {
    *returnSize=2;
    int *res=(int*)malloc(sizeof(int)*2);
    res[0]=-1;
    res[1]=-1;
    int len=10;
    int prev=head->val;
    head=head->next;
    int pres=head->val;
    head=head->next;
    int curr=2;
    int min=0;
    int max=0;
    int prv=0;
    int min2=INT_MAX;
    while(head){
        int next=head->val;
        if(pres<next && pres<prev){
            if(!min) min=curr;
            max=curr;
            if(prv){
                int temp=curr-prv;
                 min2=(min2>temp)?temp:min2;
            }
            prv=curr;
        }else if((pres>next && pres>prev)){
            if(!min) min=curr;
            max=curr;
            if(prv){
                int temp=curr-prv;
                min2=(min2>temp)?temp:min2;
            }
            prv=curr;
        }
        prev=pres;
        pres=next;
        head=head->next;
        curr++;
    }
    if(min2==INT_MAX) return res;
    res[0]=min2;
    res[1]=max-min;
    return res;
}