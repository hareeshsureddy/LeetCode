int maxArea(int* height, int heightSize) {
    int i = 0, j = heightSize - 1, maxArea = 0;
    while (i < j) {
        int w = j - i;

        int h = (height[i] < height[j]) ? height[i] : height[j];
        h*=w;
        maxArea = (maxArea < (h)) ? h : maxArea;
        if (height[i] < height[j])
            i++;
        else
            j--;
    }
    return maxArea;
}