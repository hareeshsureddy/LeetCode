/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** divideString(char* s, int k, char fill, int* returnSize) {
    int len=strlen(s);
    *returnSize=0;
   char **result=(char**)malloc(((len/k)+1)*sizeof(char*));
   int i=0;
   for(;i<len;i+=k){
    if(len-i<k) break;
    result[(*returnSize)]=(char*)malloc((k+1)*sizeof(char));
    int l=0;
    for(;l<k;l++){
    result[(*returnSize)][l]=s[i+l];
    }
    result[(*returnSize)++][l]='\0';
   }
   if(i<len) {
   int l=0;
   result[(*returnSize)]=(char*)malloc((k+1)*sizeof(char));
   for(;l<k;l++){
    if((i+l)<len)
    result[(*returnSize)][l]=s[i+l];
    else
    result[(*returnSize)][l]=fill;
   }
   result[(*returnSize)++][l]='\0';
    }
   return result;
}