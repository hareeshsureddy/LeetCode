/* This below logic failing due to cm->2*10+12=32 and db->30*10+2=32*/
/*
int longestPalindrome(char** words, int wordsSize) {
    int map[290]={0};
    int result=0;
    for( int i=0;i<wordsSize;i++){
        int Org_index=(words[i][0]-'a')*10+(words[i][1]-'a');
        int Rev_index=(words[i][1]-'a')*10+(words[i][0]-'a');
        if(map[Rev_index]){
            map[Rev_index]--;
            result+=4;
        }
        else{
            map[Org_index]++;
        }
    }
    for (int i=0;i<26;i++){
            if(map[i*11] % 2==1){
                result+=2;
                break;
            }
        }
    return result;
} 
*/
int longestPalindrome(char** words, int wordsSize) {
    int map[26][26]={0};
    int result=0;
    bool same_char=true;
    for( int i=0;i<wordsSize;i++){
        int a=(words[i][0]-'a');
        int b=(words[i][1]-'a');
        if(map[b][a]){
            map[b][a]--;
            result+=4;
        }
        else{
            map[a][b]++;
        }
    }
    for (int i=0;i<26;i++){
            if(map[i][i]>0){
                result+=2;
                break;
            }
    }
    return result;
}