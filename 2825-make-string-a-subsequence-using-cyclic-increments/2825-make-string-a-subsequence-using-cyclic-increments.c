bool canMakeSubsequence(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len2>len1) return false;
    int i=0,j=0;
    while(i<len2){
        bool status=false;
        while(j<len1){
            if (str2[i] == 'a'){
                if(str1[j]==str2[i] || str1[j]=='z' ){
                    status=true;
                    j++;
                    break;
                }
            }else{
                if(str1[j]==str2[i] || (str1[j]+1)==str2[i] ){
                    status=true;
                    j++;
                    break;
                }
            }
            j++;
        }
        if(!status) return false;
        i++;
    }
    return true;
}

/*
bool canMakeSubsequence(char* str1, char* str2) {
    int map[26];
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len2>len1) return false;
    for (int i = 0; i < len1; i++) {
        map[str1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++) {
        if (str2[i] == 'a') {
            if(map[0])
            map[0]--;
            else if (map[25]) {
                map[25]--;
            } else
                return false;
        } else {
            int idx=str2[i] - 'a';
            if(map[idx])
            map[idx]--;            
            else if (map[idx-1]) {
                map[idx-1]--;
            }else
            return false;
        }
    }
    return true;
}*/