/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** twoEditWords(char** queries, int queriesSize, char** dictionary, int dictionarySize, int* returnSize) {
    int len=strlen(dictionary[0]);
    char** res=(char**)malloc(sizeof(char*)*queriesSize);
    int idx=0;
    for(int i=0;i<queriesSize;i++){
        for(int j=0;j<dictionarySize;j++){
            int cnt=0;
            for(int k=0;k<len;k++){
                if(queries[i][k]!=dictionary[j][k]){
                    cnt++;
                    if(cnt>2) break;
                }
            }
            if(cnt<=2){
                res[idx]=(char*)malloc(sizeof(char)*(len+1));
                strcpy(res[idx],queries[i]);
                idx++;
                break;
            }
        }
    }
    *returnSize=idx;
    return res;
}