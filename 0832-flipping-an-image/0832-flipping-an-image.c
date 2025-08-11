/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    int** flipAndInvertImage=(int**)malloc(sizeof(int*)*imageSize);
    for(int i=0;i<imageSize;i++){
        flipAndInvertImage[i]=(int*)malloc(sizeof(int)*imageSize);
    }
    for(int i=0;i<imageSize;i++){
        for(int j=0;j<imageSize;j++){
            flipAndInvertImage[i][j]=!(image[i][imageSize-j-1]);
        }
    }
    *returnColumnSizes = imageColSize;
    *returnSize=imageSize;
    return flipAndInvertImage;
}