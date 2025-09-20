int compare(const void *a, const void *b){
    const int *ptr1=*(int**)a;
    const int *ptr2=*(int**)b;
    return ptr1[0]>ptr2[0];
}
struct tag{
    int start;
    int end;
}Prev;
int findMinArrowShots(int** points, int pointsSize, int* pointsColSize) {
    if(pointsSize==1) return 1;
    int cnt=0;
    qsort(points,pointsSize,sizeof(points[0]),compare);
    Prev.start=points[0][0];
    Prev.end=points[0][1];
    for(int i=1;i<pointsSize;i++){
        if(points[i][0]<=Prev.end){
            Prev.start=fmax(Prev.start,points[i][0]);
            Prev.end=fmin(Prev.end,points[i][1]);
        }else{
            cnt++;
                Prev.start=points[i][0];
                Prev.end=points[i][1];
        }
    }
    return cnt+1;
}