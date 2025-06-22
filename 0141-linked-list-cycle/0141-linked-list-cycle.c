/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;           // move slow by 1
        fast = fast->next->next;     // move fast by 2

        if (slow == fast) {
            return true;             // cycle detected
        }
    }

    return false;                    // no cycle
}