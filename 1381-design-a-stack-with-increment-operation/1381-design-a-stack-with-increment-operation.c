


typedef struct {
    int *stack;
    int idx;
    int sizeStack;
} CustomStack;


CustomStack* customStackCreate(int maxSize) {
    CustomStack* obj=(CustomStack*)malloc(sizeof(CustomStack));
    obj->stack=(int*)malloc(sizeof(int)*maxSize);
    obj->idx=0;
    obj->sizeStack=maxSize;
    return obj;
}

void customStackPush(CustomStack* obj, int x) {
        if(obj->idx<obj->sizeStack) {
            obj->stack[obj->idx++]=x;
        }
}

int customStackPop(CustomStack* obj) {
    if(obj->idx<=0) return -1;
    return obj->stack[--obj->idx];
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    int n=fmin(k,obj->sizeStack);
    n=fmin(n,obj->idx);
    for(int i=0;i<n;i++){
        obj->stack[i]+=val;
    }
}

void customStackFree(CustomStack* obj) {
    free(obj->stack);
    free(obj);
}

/**
 * Your CustomStack struct will be instantiated and called as such:
 * CustomStack* obj = customStackCreate(maxSize);
 * customStackPush(obj, x);
 
 * int param_2 = customStackPop(obj);
 
 * customStackIncrement(obj, k, val);
 
 * customStackFree(obj);
*/