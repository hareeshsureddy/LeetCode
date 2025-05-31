/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** commonChars(char** words, int wordsSize, int* returnSize) {
    int mainMap[26]={0};
    *returnSize=0;
    int i,j;
        for ( j=0;words[0][j];j++){
            mainMap[words[0][j]-'a']++;
        }
    for(  i=1;i<wordsSize;i++){
        int Map[26]={0};
        for (int j=0;words[i][j];j++){
            Map[words[i][j]-'a']++;
        }
        for (int k=0;k<26;k++){
            mainMap[k]=(mainMap[k]<Map[k])?mainMap[k]:Map[k];
        }
    }
    int sum=0;
         for (int k=0;k<26;k++){
           sum+=mainMap[k];
        }
    char **result=(char**)malloc(sum*sizeof(char*));
    int index=0;
    for (int k=0;k<26;k++){
        if(mainMap[k]){
            for (int l=0;l<mainMap[k];l++){
                result[index]=(char*)malloc(2*sizeof(char));
                result[index][0]=k+'a';
                result[index++][1]='\0';
               (*returnSize)++;
            }
        }
    }
    return result;
    /*
    for( int i=0;i<wordsSize;i++){
        for (int j=0;words[i][j];j++){
            map[i][words[i][j]-'a']++;
        }
    }

    
    char **result = (char **)malloc(2600 * sizeof(char *));
    int i,j,index=0;
        for( i=0;i<26;i++){
        for (j=1;j<wordsSize;j++){
            if (map[j][i]!=map[j-1][i])
            break;
        }
        if(j==wordsSize){
    for( int k=0;k<map[0][i];k++){
    result[index] = (char *)malloc(2 * sizeof(char));  // 1 char + 1 null terminator
    result[index][0]=i+'a';
    result[index][1]='\0';
    index++;
    *returnSize++;
    }
        }
    }
    return result;
    */
}