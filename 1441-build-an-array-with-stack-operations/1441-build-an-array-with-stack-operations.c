/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    int len=10;
    char **res=(char**)malloc(sizeof(char*)*len);
    int idx=0;
    int streamNum=1;
    for(int i=0;i<targetSize;i++){
        int num=target[i];
        if(num==streamNum){
            if(idx>=len)
            {
                len*=2;
                res=realloc(res,sizeof(char*)*len);
            }
            res[idx]=(char*)malloc(sizeof(char)*5);
            strcpy(res[idx],"Push");
            idx++;
            streamNum++;
        }else{
            int diff=num-streamNum;
            for(int j=0;j<diff;j++){
            if(idx>=len)
            {
                len*=2;
                res=realloc(res,sizeof(char*)*len);
            }
            res[idx]=(char*)malloc(sizeof(char)*5);
            strcpy(res[idx],"Push");
            idx++;
            if(idx>=len)
            {
                len*=2;
                res=realloc(res,sizeof(char*)*len);
            }
            res[idx]=(char*)malloc(sizeof(char)*5);
            strcpy(res[idx],"Pop");
            idx++;  
            streamNum++;                          
            }
            if(idx>=len)
            {
                len*=2;
                res=realloc(res,sizeof(char*)*len);
            }
            res[idx]=(char*)malloc(sizeof(char)*5);
            strcpy(res[idx],"Push");
            idx++;
            streamNum++;
        }
    }
    *returnSize=idx;
    return res;
}