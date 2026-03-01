int minPartitions(char* n) {
    char minPartitions='0';
    int idx=0;
    while(n[idx]){
        if(minPartitions<n[idx])
            minPartitions=n[idx];
            idx++;
    }   
    return minPartitions-'0';
}