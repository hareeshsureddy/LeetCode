int longestPalindrome(char* s) {
    int map[52]={0};
    int result=0;
    for (int i=0;s[i];i++){
        int index=s[i]-'A';
       index= (index>25)?(index-6):index;
       map[index]++;
    }
        for (int i=0;i<52;i++){
            if(map[i]&1){
                result+=(map[i]/2)*2;
                map[i]%=2;
            }else
            {
                result+=map[i];
                map[i]=0;
            }
        }
                for (int i=0;i<52;i++){
                    if(map[i]){
                        result++;
                        break;
                    }
                }
                return result;
}