int lengthOfLongestSubstring(char* s) {
    int j=0,i=0,max=0;
    int len=strlen(s);
    int map[128]={0};
    while(s[j]){
        if(map[s[j]]){
            if(max>(len-i))
                break;
            int k=j-i;
            max=(max<k)?k:max;
            j=i=map[s[j]];
            memset(map,0,128*sizeof(int));
        }
        map[s[j]]=i+1;
        j++;
    }
            int k=j-i;
            max=(max<k)?k:max;
            return max;
}