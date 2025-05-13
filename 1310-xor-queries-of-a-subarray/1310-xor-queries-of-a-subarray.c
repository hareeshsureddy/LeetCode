int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int *ptr = (int *)malloc(sizeof(int) * queriesSize);
    for (int i = 1; i < arrSize; i++) {
        arr[i] = arr[i - 1] ^ arr[i];
    }

    for (int i = 0; i < queriesSize; i++) {
        int l=queries[i][0];
        int r=queries[i][1];
        ptr[i] = (arr[r] ^ ((l==0)?0:(arr[l-1])));
    } 

    // Set the return size to be equal to the number of queries
   *returnSize = queriesSize;

    // Return the result array
    return ptr;
}