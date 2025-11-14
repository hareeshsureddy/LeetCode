/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
/* TLE
int** rangeAddQueries(int n, int** queries, int queriesSize, int*
queriesColSize, int* returnSize, int** returnColumnSizes) { int
**res=(int**)malloc(sizeof(int*)*n); int
*columnSizes=(int*)malloc(sizeof(int)*n); for(int i=0;i<n;i++){
   res[i]=(int*)calloc(sizeof(int),n);
   columnSizes[i]=n;
   }
   for(int i=0;i<queriesSize;i++){
       int r1,r2,c1,c2;
       r1=queries[i][0];
       c1=queries[i][1];
       r2=queries[i][2];
       c2=queries[i][3];
       for(int r=r1;r<=r2;r++){
           for(int c=c1;c<=c2;c++){
               res[r][c]+=1;
           }
       }
   }
   *returnSize=n;
   *returnColumnSizes=columnSizes;
   return res;
}

*/

int** rangeAddQueries(int n, int** queries, int queriesSize,
                      int* queriesColSize, int* returnSize,
                      int** returnColumnSizes) {
    int** res = (int**)malloc(sizeof(int*) * n);
    int* columnSizes = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        res[i] = (int*)calloc(sizeof(int), n);
        columnSizes[i] = n;
    }
    for (int i = 0; i < queriesSize; i++) {
        int r1, r2, c1, c2;
        r1 = queries[i][0];
        c1 = queries[i][1];
        r2 = queries[i][2];
        c2 = queries[i][3];
        for (int r = r1; r <= r2; r++) {
            res[r][c1] += 1;
            if ((c2 + 1) < n)
                res[r][c2 + 1] -= 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            res[i][j]+=res[i][j-1];
        }
    }
    *returnSize = n;
    *returnColumnSizes = columnSizes;
    return res;
}