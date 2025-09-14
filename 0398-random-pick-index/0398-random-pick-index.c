


typedef struct {
    int *arr;
    int len;
} Solution;


Solution* solutionCreate(int* nums, int numsSize) {
  /*  int *res=(int*)malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)
    res[i]=nums[i]; */
    Solution *data=(Solution*)malloc(sizeof(Solution));
    data->arr=nums;
    data->len=numsSize;
    return data;
}

int solutionPick(Solution* obj, int target) {
    while(1){
        int idx=rand()%obj->len;
        if(obj->arr[idx]==target) return idx;
    }
}

void solutionFree(Solution* obj) {
    free(obj->arr);
    free(obj);
}

/**
 * Your Solution struct will be instantiated and called as such:
 * Solution* obj = solutionCreate(nums, numsSize);
 * int param_1 = solutionPick(obj, target);
 
 * solutionFree(obj);
*/