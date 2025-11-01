/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#define SIZE 100001
static bool map[SIZE];
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    for(int i=0;i<numsSize;i++){
        map[nums[i]]=true;
    }
    struct ListNode *res=head;
    struct ListNode *temp=head;
    struct ListNode *temp1=head;
    while(head){
        if(!(map[head->val])){
        temp1=temp;
        temp->val=head->val;
        temp=temp->next;
        }
        head=head->next;
    }
    temp1->next=NULL;
    memset(map,0,sizeof(map));
    return res;
}

/*
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    struct ListNode* temp=NULL;
    for (int i=0;i<numsSize;i++){
        temp=head;
        struct ListNode* temp1=NULL;
        while(temp){
            if(temp->val==nums[i]){
            if(temp->next!=NULL){
                temp->val=temp->next->val;
                temp->next=temp->next->next;
                continue;
            }else{
                temp1->next=NULL;
            }
          }
          temp1=temp;
          temp=temp->next;
        }
    }
    return head;
}*/
/*
struct ListNode* newListNode(int val, struct ListNode* prev){
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = prev;
    return temp;
}
struct ListNode* reverse(struct ListNode* head){
    struct ListNode* curr = head, *prev = NULL;
    while(curr){
        struct ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    bool present[100001] = {false};
    for(int i = 0; i < numsSize; i++)
        present[nums[i]] = true;
    int *arr = (int*)malloc(sizeof(int) * 100001);
    int x = 0;
    while(head){
        if(!present[head->val])
            arr[x++] = head->val;
        head = head->next;
    }
    struct ListNode* prev = NULL;
    for(int i = 0; i < x; ++i){
        head = newListNode(arr[i], prev);
        prev = head;
    }
    return reverse(prev);
} */