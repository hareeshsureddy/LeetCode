/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int len=(1<<numsSize);
    *returnSize=len;
    int *ColumnSizes=(int*)malloc(len*sizeof(int));
    *returnColumnSizes=ColumnSizes;
    int **subsetsRes=(int**)malloc(sizeof(int*)*len);
    for(int i=0;i<len;i++){
            int setBits=0,num=i;
            while(num){
                setBits++;
                num&=(num-1);
            }
            int *list=(int*)malloc(sizeof(int)*setBits);
            subsetsRes[i]=list;
            ColumnSizes[i]=setBits;
            int k=i;   
        for(int j=0;j<numsSize;j++){        
            if(k&1){
                list[--setBits]=nums[j];
            }
            k>>=1;
        }
    }
    return subsetsRes;
}