/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode *temp, *start, *end;
    temp = head;
    start = head;
    int len = 0;
    while (temp) {
        end = temp;
        temp = temp->next;
        len++;
    }
    printf("%d ",len);
    k %= len;
    if (!k)
        return head;
    len -= k;
    temp = head;
    while (--len) {
        temp = temp->next;
    }
    end->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
}