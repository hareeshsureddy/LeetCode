int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int maximizeSquareHoleArea(int n, int m, int* hBars, int hBarsSize, int* vBars, int vBarsSize) {
    qsort(hBars,hBarsSize,sizeof(int),compare);
    qsort(vBars,vBarsSize,sizeof(int),compare);
    int len1=1,len2=1;
    int curLen=1;
    for(int i=0;i<hBarsSize-1;i++){
        if(hBars[i]==(hBars[i+1]+1)) curLen++;
        else
        curLen=1;
        len1=fmax(curLen,len1);
    }
    curLen=1;
    for(int i=0;i<vBarsSize-1;i++){
        if(vBars[i]==(vBars[i+1]+1)) curLen++;
        else
        curLen=1;
        len2=fmax(curLen,len1);
    }
    int side=fmin(len1,len2)+1;
    return (1<<(side));
}