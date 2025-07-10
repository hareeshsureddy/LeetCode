/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*qwertyuiop
 asdfghjkl
 zxcvbnm*/
 int map[26]={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
char** findWords(char** words, int wordsSize, int* returnSize) {
    char **result=(char**)malloc(sizeof(char*)*wordsSize);
    int i=0,resultSize=0;
    for (;i<wordsSize;i++){
        int indexx=(words[i][0]-'a');
        indexx=(indexx>=0)?indexx:indexx+32;
        int row=map[indexx];
        int j=1;
        bool flag=true;
        while(words[i][j]){
        int indexx1=(words[i][j]-'a');
        indexx1=(indexx1>=0)?indexx1:indexx1+32;
        if (row!=map[indexx1]){
            flag=false;
            break;
        }
        j++;
        }
        if(flag){
            result[resultSize]=(char*)malloc(sizeof(char)*(strlen(words[i])+1));
            result[resultSize++]=words[i];
        }
    }
    *returnSize=resultSize;
    return result;
}