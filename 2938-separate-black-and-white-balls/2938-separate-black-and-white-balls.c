long long minimumSteps(char* s) {
    long long minSteps=0,blackCnt=0;
    int len=strlen(s);
    int i=0;
    while(i<len){
        if(s[i]=='1'){
            blackCnt++;
        }else{
           minSteps+=blackCnt; 
        }
        i++;
    }
    return minSteps;
}