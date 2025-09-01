/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static uint32_t i_index[100001];
static uint32_t j_index[100001];
// Binary search lower_bound in C
int lower_bound(int arr[], int size, int target) {
    int left = 0, right = size;  // right = size (one past last)
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left; // index of first element >= target
}
int* beautifulIndices(char* s, char* a, char* b, int k, int* returnSize) {
    int i,j;
    char *ptr=NULL;
    int len=strlen(s);
    int len1=strlen(a);
    int len2=strlen(b);
    int offset=0;
    int index_i=0,index_j=0;
    while(offset<len){
    ptr=strstr(s+offset,a);
        if(ptr){
            i=ptr-s;
            offset=i+1;//len1;
            i_index[index_i++]=i;
        }else
        break;
    }
    int *res=(int*)malloc(sizeof(int)*index_i);
    if(!index_i){
    *returnSize=0;
     return res;
    }
    offset=0;
    while(offset<len){
    ptr=strstr(s+offset,b);
        if(ptr){
            j=ptr-s;
            offset=j+1;//len2;
            j_index[index_j++]=j;
        }else
        break;
    }
    if(!index_j){
    *returnSize=0;
     return res;
    }
    int index=0;
  /*  for(int i=0;i<index_i;i++){
       // printf("%d ",i_index[i]);
        for(int j=0;j<index_j;j++){
           // printf("%d ",j_index[j]);
            if(abs(i_index[i]-j_index[j])<=k){
                    res[index++]=i_index[i];
                    break;
            }
        }
    } */
    int right=j_index[index_j-1];
    int left=j_index[0];
        for(int i=0;i<index_i;i++){
            int right_limit=fmin(len-1,(i_index[i]+k));
            int left_limit=fmax(0,(i_index[i]-k));
            int pos = lower_bound(j_index, index_j, left_limit);
            if(pos < index_j && j_index[pos] <= right_limit){
                    res[index++]=i_index[i];
            }
        }
    *returnSize=index;
    return res;

}