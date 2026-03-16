int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int heightChecker(int* heights, int heightsSize) {
    int *temp=(int*)malloc(sizeof(int)*heightsSize);
    for(int i=0;i<heightsSize;i++){
        temp[i]=heights[i];
    }
    qsort(temp,heightsSize,sizeof(int),compare);
    int res=0;
    for(int i=0;i<heightsSize;i++){
        printf("%d ",temp[i]);
        if(heights[i]!=temp[i])
        res++;
    }
    return res;
}