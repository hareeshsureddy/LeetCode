/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 static int map[100001];
 int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
 }
int* findOriginalArray(int* changed, int changedSize, int* returnSize) {
    *returnSize=0;
    if(changedSize%2)
        return changed;
    qsort(changed,changedSize,sizeof(int),compare);
    memset(map,0,sizeof(int)*100001);
    for(int i=0;i<changedSize;i++){
        map[changed[i]]++;
    }
    int idx=0;
    for(int i=0;i<changedSize;i++){
        int num=changed[i];
        if(!map[num]) continue;
        int mum=num<<1;
        if(mum>100000) return changed; 
        if(map[mum]){
           map[mum]--;
            map[num]--;
            changed[idx++]=num;
        }else{
        return changed;            
        }
    }
        *returnSize=changedSize>>1;
        return changed;

}