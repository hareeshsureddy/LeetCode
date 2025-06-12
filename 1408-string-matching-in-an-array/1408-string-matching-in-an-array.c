/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** stringMatching(char** words, int wordsSize, int* returnSize) {
    *returnSize=0;
    char **result=(char**)malloc(sizeof(char*)*wordsSize);
    for( int i=0;i<wordsSize;i++){
        for( int j=0;j<wordsSize;j++){
            if(i==j) continue;
        if(strstr(words[j],words[i])){
            result[(*returnSize)++]=words[i];
            break;
        }
        }
    }
    return result;
}