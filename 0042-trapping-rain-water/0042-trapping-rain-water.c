/*
void leftMax(int* leftMax,int* height, int heightSize){
    leftMax[0]=height[0];
    for(int i=1;i<heightSize;i++)
    leftMax[i]=fmax(leftMax[i-1],height[i]);
}

void rightMax(int* rightMax,int* height, int heightSize){
    rightMax[heightSize-1]=height[heightSize-1];
    for(int i=heightSize-2;i>=0;i--)
    rightMax[i]=fmax(rightMax[i+1],height[i]);
}

int trap(int* height, int heightSize) {
    int *left_max=(int*)malloc(sizeof(int)*heightSize);
    int *right_max=(int*)malloc(sizeof(int)*heightSize);
    leftMax(left_max,height,heightSize);
    rightMax(right_max,height,heightSize);
    int totalWater=0;
    for(int i=1;i<heightSize-1;i++)
        totalWater+=fmin(left_max[i],right_max[i])-height[i];
    return totalWater;
}
*/

void leftMax(int* leftMax,int* height, int heightSize){
    leftMax[0]=height[0];
    for(int i=1;i<heightSize;i++)
    leftMax[i]=fmax(leftMax[i-1],height[i]);
}

void rightMax(int* rightMax,int* height, int heightSize){
    rightMax[heightSize-1]=height[heightSize-1];
    for(int i=heightSize-2;i>=0;i--)
    rightMax[i]=fmin(rightMax[i],fmax(rightMax[i+1],height[i]));
}

int trap(int* height, int heightSize) {
    int *leftright_max=(int*)malloc(sizeof(int)*heightSize);
    leftMax(leftright_max,height,heightSize);
    rightMax(leftright_max,height,heightSize);
    int totalWater=0;
    for(int i=1;i<heightSize-1;i++)
        totalWater+=leftright_max[i]-height[i];
        free(leftright_max);
    return totalWater;
}