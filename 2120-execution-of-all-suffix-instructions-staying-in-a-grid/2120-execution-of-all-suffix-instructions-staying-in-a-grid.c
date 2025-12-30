/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* executeInstructions(int n, int* startPos, int startPosSize, char* s,
                         int* returnSize) {
    int len = strlen(s);
    *returnSize = len;
    int* res = (int*)malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        int r = startPos[0];
        int c = startPos[1];
        int stepCount = 0;
        int idx = i;
        while (idx < len) {
            switch (s[idx]) {
            case 'U':
                r--;
                break;
            case 'D':
                r++;
                break;
            case 'R':
                c++;
                break;
            case 'L':
                c--;
                break;
            }
            if (r < n && r >= 0 && c < n && c >= 0)
                stepCount++;
            else
                break;
            idx++;
        }
        res[i] = stepCount;
    }
    return res;
}