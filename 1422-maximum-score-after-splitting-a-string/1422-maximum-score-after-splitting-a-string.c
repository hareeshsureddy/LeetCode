int maxScore(char* s) {
    int ones=0,zeros=0,max=0;
    int len=strlen(s);
    for (int i=0;i<len;i++){
        if(s[i]=='1') ones++;
    }
    if(!ones || ones==len) return len-1;
    int sum;
    for (int i=0;i<len-1;i++){
        if(s[i]=='0'){
            zeros++;
            sum=zeros+ones;
            max=(max<sum)?sum:max;
        }else{
            ones--;
            sum=zeros+ones;
            max=(max<sum)?sum:max;
        }
    }
    return max;
}