int compress(char* chars, int charsSize) {
    int cnt=0;
    int i=0,j=0;
    int index=0;
    while(j<charsSize){
        while(j<charsSize && chars[i]==chars[j]) j++;
        int count=(j-i);
        if(count==1){
             cnt++;
             chars[index++]=chars[i];
        }
        else{
            chars[index++]=chars[i];
            cnt++;
            char str[5];
            int i=0;
            sprintf(str, "%d", count); // Convert to string
            while(str[i]){
              chars[index++]=str[i++];  
            }
            cnt+=strlen(str);
        }
        i=j;
    }
    return cnt;
}