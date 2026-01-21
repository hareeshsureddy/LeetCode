/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** stringSequence(char* target, int* returnSize) {
    int len=10;
   char **res=(char**)malloc(sizeof(char*)*len);
   int sLen=strlen(target);
   int idx=0;
   int Len=2;
   for(int i=0;i<sLen;i++){
      char str[Len];
       str[Len-1]='\0';
      for(int j=0;j<i;j++){
        str[j]=target[j];
      }
      str[i]='a';
      while(target[i]!=str[i]){
      if(idx>=len){
        len*=2;
        res=(char**)realloc(res,sizeof(char*)*len);
      }
        res[idx++]=strdup(str);
        str[i]++;
      }
      if(idx>=len){
        len*=2;
        res=(char**)realloc(res,sizeof(char*)*len);
      }
        res[idx++]=strdup(str);
        Len++;
   } 
   *returnSize=idx;
   return res;
}