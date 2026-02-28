static bool map[1000000010];
int bulbSwitch(int n) {
    return sqrt(n);
    memset(map,true,n);
    for(int i=1;i<n;i++){
        int idx=i;
        while(idx<n){
            map[idx]^=1;
            idx+=i+1;
        }
    }
    int bulbSwitch=0;
    for(int i=0;i<n;i++){
        if(map[i]) bulbSwitch++;
    }
    return bulbSwitch;
}