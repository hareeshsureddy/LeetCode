/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** cellsInRange(char* s, int* returnSize) {
    //A1:Z9
    int cnt=(s[3]-s[0]+1)*(s[4]-s[1]+1);
    char **res=(char**)malloc(sizeof(char*)*cnt);
    *returnSize=cnt;
    char *data=(char*)malloc(sizeof(char)*3*cnt);
    int indexx=0,idx=0;
    for(char i=s[0];i<=s[3];i++){
        for(int j=s[1];j<=s[4];j++){
            res[idx++]=data+indexx;
            data[indexx++]=i;
            data[indexx++]=j;
            data[indexx++]='\0';
        }
    }
    return res;
}