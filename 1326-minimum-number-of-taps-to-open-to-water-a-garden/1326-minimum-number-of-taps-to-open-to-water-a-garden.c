int minTaps(int n, int* ranges, int rangesSize) {
    int startEnd[n+1];
    memset(startEnd,0,sizeof(startEnd));
    for(int i=0;i<rangesSize;i++){
        int left=i-ranges[i];
        left=(left<0)?0:left;
        int right=i+ranges[i];
        right=(right>n)?n:right;
         startEnd[left]=fmax(startEnd[left],right);   
    }
    int maxEnd=0;
    int minTaps=0;
    int currEnd=0;
    for(int i=0;i<rangesSize;i++){
        if(i>maxEnd) return -1;
        if(i>currEnd){
            minTaps++;
            currEnd=maxEnd;
        }
        maxEnd=(maxEnd<startEnd[i])?startEnd[i]:maxEnd;
    }
    return minTaps;
}
/*
int minTaps(int n, int* ranges, int rangesSize) {
    int min=INT_MAX;
    int max=0;
    int minTaps=0;
    int cnt=0;
    for(int i=0;i<rangesSize;i++){
        if(!ranges[i]) continue;
        int left=i-ranges[i];
        int right=i+ranges[i];
        if(left<min && right>max) {
            cnt=1;
            min=(left<0)?0:left;
            max=(right>n)?n:right;
        }
        else if(left<min) {
            min=(left<0)?0:left;
            cnt++;
        }
        else if (right>max){
                max=(right>n)?n:right;
                cnt++;
        }
    }
    if(max>=n && min==0) return cnt;
    else 
    return -1;
} */