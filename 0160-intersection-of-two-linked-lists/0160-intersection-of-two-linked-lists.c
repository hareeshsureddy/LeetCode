/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int len1=0;
    struct ListNode *temp=headA;
    while(temp){
        len1++;
        temp=temp->next;
    }
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
    }  
    return NULL;
}