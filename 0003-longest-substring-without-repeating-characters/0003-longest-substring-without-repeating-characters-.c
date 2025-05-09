int lengthOfLongestSubstring(char* s) {
    int j=0,i=0,max=0;
    int len=strlen(s);
    int map[128]={0};
    while((int)s[j]){
        if(map[(int)s[j]]){
            if(max>(len-i))
                break;
            int k=j-i;
            max=(max<k)?k:max;
            int start=map[(int)s[j]];
            for(;i<start;i++){
                map[(int)s[i]]=0;
            }
           // memset(map,0,128*sizeof(int));
        }
        map[(int)s[j]]=j+1;
        j++;
    }
            int k=j-i;
            max=(max<k)?k:max;
            return max;
}