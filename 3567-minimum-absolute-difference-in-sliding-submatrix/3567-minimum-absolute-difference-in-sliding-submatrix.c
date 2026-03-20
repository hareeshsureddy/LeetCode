/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }

int** minAbsDiff(int** grid, int gridSize, int* gridColSize, int k,
                 int* returnSize, int** returnColumnSizes) {
    int r = gridSize - k + 1;
    int c = gridColSize[0] - k + 1;
    int* resColSize = (int*)malloc(sizeof(int) * r);
    for (int i = 0; i < r; i++) {
        resColSize[i] = c;
    }
    *returnSize = r;
    *returnColumnSizes = resColSize;
    int** res = (int**)malloc(sizeof(int*) * r);
    for (int i = 0; i < r; i++) {
        res[i] = (int*)malloc(sizeof(int) * c);
    }
    int* temp = (int*)malloc(sizeof(int) * (k * k));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int idx = 0;
            for (int l = i; l < k + i; l++) {
                for (int m = j; m < k + j; m++) {
                    temp[idx++] = grid[l][m];
                }
            }
            qsort(temp, idx, sizeof(int), compare);
            int minAbsDiff = INT_MAX;
            for (int n = 1; n < (k*k); n++) {
                if (temp[n] != temp[n - 1]) {
                    minAbsDiff = fmin(minAbsDiff, temp[n] - temp[n - 1]);
                }
            }
            if(minAbsDiff==INT_MAX)
            res[i][j] = 0;
            else
            res[i][j] = minAbsDiff;
        }
    }
    return res;
}