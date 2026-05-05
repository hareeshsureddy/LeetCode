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
struct ListNode** splitListToParts(struct ListNode* head, int k,
                                   int* returnSize) {
    struct ListNode* temp;
    temp = head;
    struct ListNode **res =
        (struct ListNode**)malloc(sizeof(struct ListNode*) * k);
    *returnSize = k;
    int len = 0;
    while (temp) {
        temp = temp->next;
        len++;
    }
    int n, x;
    if (len == 0 || len == k || len < k) {
        n = 1;
        x = 0;
    } else {
        n = len / k;
        x = len % k;
    }
    for (int i = 0; i < k; i++) {
        temp=head;
        res[i]=temp;
        int list=n;
        while(--list){
            temp = temp->next;
        }
        if(x && x--){
           temp = temp->next; 
        }
        if(temp){
        head=temp->next;
        temp->next=NULL;
        }
        else
        head=NULL;
    }
    return res;
}