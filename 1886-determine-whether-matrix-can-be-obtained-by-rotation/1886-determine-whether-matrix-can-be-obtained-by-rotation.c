bool findRotation(int** mat, int matSize, int* matColSize, int** target,
                  int targetSize, int* targetColSize) {
    int count = 0;
    while (count < 4) {
        for (int i = 0; i < matSize; i++) {
            for (int j = 0; j < matColSize[0]; j++) {
                if (mat[i][j] != target[i][j]) {
                    goto exit;
                }
            }
        }
        return true;
    exit:
        // MAT transpose
        for (int i = 0; i < matSize; i++) {
            for (int j = i; j < matColSize[0]; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }
        // row reverse for 90 degree clock wise rotation
        for (int i = 0; i < matSize; i++) {
            int r = 0, l = matColSize[0] - 1;
            while (r < l) {
                int temp = mat[i][r];
                mat[i][r] = mat[i][l];
                mat[i][l] = temp;
                r++;
                l--;
            }
        }
        count++;
    }
    return false;
}