char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char *res=(char*)malloc(sizeof(char)*wordsSize+1);
    char *map="zyxwvutsrqponmlkjihgfedcba";
    for(int i=0;i<wordsSize;i++){
        int j=0;
        int charSum=0;
        while(words[i][j]){
            charSum+=weights[words[i][j]-'a'];
            j++;
        }
        res[i]=map[charSum%26];
    }
    res[wordsSize]='\0';
    return res;
}