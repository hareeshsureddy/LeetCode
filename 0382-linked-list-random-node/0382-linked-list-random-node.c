/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*

typedef struct {
    int *arr;
    int len;
} Solution;


Solution* solutionCreate(struct ListNode* head) {
    int len=10;
    int *res=(int*)malloc(sizeof(int)*len);
    int idx=0;
    while(head){
        if(idx==len){
            len*=2;
            res=(int*)realloc(res,sizeof(int)*len);
        }
        res[idx++]=head->val;
        head=head->next;
    }
    Solution *data=(Solution*)malloc(sizeof(Solution));
    data->arr=res;
    data->len=idx;
    return data;
}

int solutionGetRandom(Solution* obj) {
    int idx=rand()%obj->len;
    return obj->arr[idx];
}

void solutionFree(Solution* obj) {
    free(obj->arr);
    free(obj);
}
*/
/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(head);
 * int param_1 = solutionGetRandom(obj);
 
 * solutionFree(obj);
*/


typedef struct {
    struct ListNode* head;
} Solution;


Solution* solutionCreate(struct ListNode* head) {
        Solution *data=(Solution*)malloc(sizeof(Solution));
        data->head=head;
        srand(time(NULL));
        return data;
}

int solutionGetRandom(Solution* obj) {
        int res=-1;
        int count=1;
        struct ListNode* head=obj->head;
        while(head){
            if(rand()%count==0){
                res=head->val;
            }
            head=head->next;
            count++;
        }
        return res;
}

void solutionFree(Solution* obj) {
    free(obj->head);
    free(obj);
}  

/* // Bug code
typedef struct {
    struct ListNode* head;
    int len;
} Solution;


Solution* solutionCreate(struct ListNode* head) {
        Solution *data=(Solution*)malloc(sizeof(Solution));
        data->head=head;
        int len=0;
        while(head){
            len++;
            head=head->next;
        }
        data->len=len;
        return data;
}

int solutionGetRandom(Solution* obj) {
    int idx=rand()%obj->len;
    Solution* temp=obj;
    while(idx){
        temp->head=temp->head->next;
        idx--;
    }
    return temp->head->val;
}

void solutionFree(Solution* obj) {
    free(obj->head);
    free(obj);
}  */