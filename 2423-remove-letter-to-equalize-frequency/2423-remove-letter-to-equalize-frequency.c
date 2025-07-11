bool equalFrequency(char* word) {
    uint8_t map[26]={0};
    int i=0,j=0;
  //  bool falg=true;
    while(word[j]){
        map[word[j]-'a']++;
  //      if(map[word[j]-'a']>1) falg=false;
        j++;
    }
  //  if(falg) return true;
    j=25;
    while(i<j){
        while(i<26 && map[i]) i++;
        while(j>=0 && !map[j]) j--;
        if(i<j){
            map[i++]=map[j];
            map[j--]=0;
        }
    }
    int len=i;
if(len==3){
    if (map[0]==2 && map[1]==1 && map[2]==2) return true;
} 
    for(i=0;i<len;i++){
        map[i]--;
        for(j=0;j<len-1;j++){
            if(!map[j]) continue;
           // if(!map[j+1]) continue;
            if((map[j])!=map[j+1])
            break;
        }
        if(j==len-1) return true;
        map[i]++;
    }
    return false;
}