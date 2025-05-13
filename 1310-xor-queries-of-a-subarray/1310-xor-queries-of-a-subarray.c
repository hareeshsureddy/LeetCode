int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {

    // Initialize prefix array to store cumulative XOR values
    int prefix[arrSize+1];
    int *ptr = (int *)malloc(sizeof(int) * queriesSize);

    // Calculate prefix array: prefix[i] is the XOR of arr[0] to arr[i]
    prefix[0] = 0;//arr[0];
    for (int i = 1; i < arrSize+1; i++) {
        prefix[i] = prefix[i - 1] ^ arr[i-1];
    }

    for (int i = 0; i < queriesSize; i++) {
        // Brancheless
       // ptr[i] = prefix[queries[i][1]] ^ (prefix[(queries[i][0] - 1 > 0) ? queries[i][0] - 1 : 0] * (queries[i][0] != 0));
                ptr[i] = (prefix[(queries[i][1])+1] ^ (prefix[(queries[i][0])]));
    } 

    // Set the return size to be equal to the number of queries
   *returnSize = queriesSize;

    // Return the result array
    return ptr;
}