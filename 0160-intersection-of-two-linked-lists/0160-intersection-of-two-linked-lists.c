/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int len1=0,len2=0;
    struct ListNode *temp=headA;
    while(temp){
        len1++;
        temp=temp->next;
    }
    temp=headB;
    while(temp){
        len2++;
        temp=temp->next;
    }
        if(len1>len2)
        for(int i=0;len1-i>len2;i++) headA=headA->next;
        else if(len1<len2)
        for(int i=0;len2-i>len1;i++) headB=headB->next;
        while(headB!=NULL && headA!=NULL){
            if(headA==headB) return headA;
            headB=headB->next;
            headA=headA->next;
        }
    /*
    struct ListNode **map=(struct ListNode**)malloc(len1*sizeof(struct ListNode*));
    temp=headA;
    int index=0;
      while(temp){
        map[index]=temp;
        index++;
        temp=temp->next;
    }
    temp=headB;
      while(temp){
        for(int i=0;i<len1;i++){
        if(map[i]==temp)  
        return temp;
        }
        temp=temp->next;
    }  */
    return NULL;
}