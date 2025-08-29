int minDeletionSize(char** strs, int strsSize) {
    int cnt=0;
    int len=strlen(strs[0]);
    for(int i=0;i<len;i++){
        for(int j=0;j<strsSize-1;j++){
            if(strs[j][i]>strs[j+1][i]){
                cnt++;
                break;
            }
        }
    }
    return cnt;
}