/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
 int compare(const void *a,const void *b){
    return *(char*)a-*(char*)b;
}
    for(int i=0;i<wordsSize;i++){
        qsort(words[i],strlen(words[i]),sizeof(char),compare);
    }
*/
char** removeAnagrams(char** words, int wordsSize, int* returnSize) {
    *returnSize=1;
    if(wordsSize==1) return words;
    char **res=(char**)malloc(sizeof(char*)*wordsSize);
    res[0]=words[0];
    int idx=1;
    for(int i=1;i<wordsSize;i++){
        int freq1[26]={0},freq2[26]={0};
        int j=0;

        while(res[idx-1][j]){
            freq1[res[idx-1][j]-'a']++;
            j++;
        }

        j=0;
        while(words[i][j]){
            freq2[words[i][j]-'a']++;
            j++;
        }
        bool Not_anagram=false;
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                Not_anagram=true;
                break;
            }
        }
        if(Not_anagram){
            res[idx++]=words[i];
        }
    }
    *returnSize=idx;
    return  res;
}