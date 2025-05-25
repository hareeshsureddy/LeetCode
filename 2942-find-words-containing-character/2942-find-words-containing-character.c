/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    *returnSize=0;
    int *result=(int*)calloc(sizeof(int),wordsSize);
    int k=0;
/*
    for (int i=0;i<wordsSize;i++){
        int len=strlen(words[i]);
        int j=0;
        while(j<len){
            if(x==words[i][j]){
                result[k++]=i;
                *returnSize+=1;
                break;
            }
            j++;
        }
    } 
*/
for (int i=0;i<wordsSize;i++){
    if(strchr(words[i],x)){
         result[k++]=i;
        *returnSize+=1;
    }
}
    return result;
}