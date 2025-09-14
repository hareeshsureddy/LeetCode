/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /*
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if(!listsSize) return NULL;

    for(int i=1;i<listsSize;i++){
        struct ListNode* temp1=lists[0];
        struct ListNode* temp2=lists[i];
        struct ListNode* temp=lists[0];
        if(!lists[0])
        lists[0]=lists[i];
        if(temp1 && temp2){
        if(temp1->val<=temp2->val){
            temp=temp1;
            temp1=temp1->next;
        }else{
            int val=temp1->val;
            temp1->val=temp2->val;
            temp2->val=val;
            temp=temp1;
            temp1=temp1->next;
        }
        }
    while(temp1 && temp2){
        if(temp1->val<=temp2->val){
            temp->next=temp1;
            temp1=temp1->next;
        }else{
            temp->next=temp2;
            temp2=temp2->next;
        }
        temp=temp->next;
    }
        if(temp1 && temp){
        temp->next=temp1;
        }else if(temp2 && temp){
        temp->next=temp2;
        }
    }
    return lists[0];
}
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    if (l1) tail->next = l1;
    if (l2) tail->next = l2;
    return dummy.next;
}
/*
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;

    struct ListNode* merged = lists[0];
    for (int i = 1; i < listsSize; i++) {
        merged = mergeTwoLists(merged, lists[i]);
    }
    return merged;
}
 */

 struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0) return NULL;
    if (listsSize == 1) return lists[0];

    int mid = listsSize / 2;
    struct ListNode* left = mergeKLists(lists, mid);
    struct ListNode* right = mergeKLists(lists + mid, listsSize - mid);
    return mergeTwoLists(left, right);
}
