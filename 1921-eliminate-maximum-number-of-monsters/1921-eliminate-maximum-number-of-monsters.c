int compare(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int ceil_int(double x) {
    int xi = (int)x;
    return (x > (double)xi) ? xi + 1 : xi;
}

int eliminateMaximum(int* dist, int distSize, int* speed, int speedSize) {
    for(int i=0;i<distSize;i++){
        dist[i]=ceil((float)dist[i]/speed[i]);
    }
    qsort(dist,distSize,sizeof(int),compare);
    int time_passed=1;
    int eliminateMaximum=1;
    for(int i=1;i<speedSize;i++){
        if(dist[i]-time_passed<=0) return eliminateMaximum;
        time_passed++;
        eliminateMaximum++;
    }
    return eliminateMaximum;
}