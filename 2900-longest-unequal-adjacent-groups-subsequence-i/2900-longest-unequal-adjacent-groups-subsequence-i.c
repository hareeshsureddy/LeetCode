/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** getLongestSubsequence(char** words, int wordsSize, int* groups, int groupsSize, int* returnSize) {
    char **result=(char**)malloc(wordsSize*sizeof(char*));
    int index=1;
    result[0]=words[0];
    for (int i=1;i<wordsSize;i++){
        if (groups[i]!=groups[i-1]){
            result[index++]=words[i];
        }
    }
    *returnSize=index;
    return result;
}
/*
char** getLongestSubsequence(char** words, int wordsSize, int* groups, int groupsSize, int* returnSize) {
    char **result = (char**)malloc(wordsSize * sizeof(char*));
    int index = 0;
    
    result[index++] = words[0];  // first word is always included

    for (int i = 1; i < wordsSize; i++) {
        if (strcmp(words[i], words[i - 1]) != 0) {
            result[index++] = words[i];  // only add if different from previous
        }
    }

    *returnSize = index;
    return result;
}*/
