#define M   1000000007
int lengthAfterTransformations(char* s, int t) {
    int result=0;
    int len=strlen(s);
    int map[26]={0};
    for (int i=0;i<len;i++){
        map[s[i]-'a']++;
    }
    for (int i=0;i<t;i++){
        int map1[26]={0};
        for (int k=0;k<26;k++){
            if(map[k]) {
            if(k!=25){
                map1[k+1]=(map1[k+1]+map[k])%M;
            }else{
                map1[0]=(map1[0]+map[25])%M;
                map1[1]=(map1[1]+map[25])%M;
            }
         }
      }
      memcpy(map,map1,sizeof(int)*26);
    }
        for (int k=0;k<26;k++){
        result=(result+map[k])%M;
        }
        return result;
}