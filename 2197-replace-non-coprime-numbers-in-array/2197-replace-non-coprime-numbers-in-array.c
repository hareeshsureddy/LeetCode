/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
 int GCD(int x,int y){
    while(x!=y){
        if(x>y) x-=y;
        else
        y-=x;
    }
    return x;
 }
 int LCM(int x,int y){
    return (x*y)/GCD(x,y);
 }
int* replaceNonCoprimes(int* nums, int numsSize, int* returnSize) {
    
    if(numsSize==1){
        *returnSize=1;
        return nums;
    } 
    int *stack=(int*)malloc(sizeof(int)*numsSize);
    int idx=0;
    stack[idx]=nums[0];
    for(int i=1;i<numsSize;i++){
        int gcd=GCD(stack[idx],nums[i]);
            if(gcd>1){
            long long mum=(long long)stack[idx]*nums[i];
            stack[idx]=mum/gcd;
            }else{
                stack[++idx]=nums[i];
            }
        }
        *returnSize=idx+1;
        return stack;
} */

int gcd_int(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int* replaceNonCoprimes(int* nums, int numsSize, int* returnSize) {
    long long *stk = malloc(sizeof(long long) * numsSize);
    int top = -1;
    for (int i = 0; i < numsSize; ++i) {
        long long cur = nums[i];
        while (top >= 0) {
            int g = gcd_int((int)stk[top], (int)cur);
            if (g == 1) break;
            cur = (stk[top] / g) * cur;  // merge
            --top; // pop and continue checking with previous
        }
        stk[++top] = cur;
    }
    *returnSize = top + 1;
    int *ret = malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; ++i) ret[i] = (int)stk[i];
    free(stk);
    return ret;
}