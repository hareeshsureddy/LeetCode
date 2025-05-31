/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a,const void *b){
	//Assending Order
	return *(int*)a-*(int*)b;
	//Desending Order
	//return *(int*)b-*(int*)a;
}
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    *returnSize=arr1Size;
    int index=0;
    int *result=(int*)malloc(arr1Size*sizeof(int));
    qsort(arr1,arr1Size,sizeof(arr1[0]),compare);
   // return arr1;
    for (int i=0;i<arr2Size;i++){
        for (int j=0;j<arr1Size;j++){
            if(arr2[i]!=arr1[j])
            continue;
            else{
                while(j<arr1Size && arr2[i]==arr1[j]){
                    result[index++]=arr2[i];
                    arr1[j++]=-1;
                }
                break;
            }
        }
    }
    for(int i=0;i<arr1Size;i++){
        if(arr1[i]>=0)
        result[index++]=arr1[i];
    }
    return result;
}