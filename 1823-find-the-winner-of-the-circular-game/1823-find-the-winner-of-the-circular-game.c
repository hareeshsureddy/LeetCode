int findTheWinner(int n, int k) {
    int queue[n];
    for(int i=0;i<n;i++)
    queue[i]=i+1;
    int i=0,idx;
    while(n>1){
        idx=(i+(k-1))%n;
        i=idx;
        while(idx<n-1){
            queue[idx]=queue[idx+1];
            idx++;
        }
        n--;
    }
    return queue[0];
}