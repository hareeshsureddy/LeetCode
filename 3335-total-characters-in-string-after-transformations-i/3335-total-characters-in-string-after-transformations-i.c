#define M   1000000007
/*int lengthAfterTransformations(char* s, int t) {
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
      memcpy(map,map1,sizeof(map));
    }
        for (int k=0;k<26;k++){
        result=(result+map[k])%M;
        }
        return result;
}*/
#define MOD 1000000007
int lengthAfterTransformations(char* s, int t) {
    long long v[26] = {0};

    for (int i = 0; s[i]; i++) {
        v[s[i] - 'a']++;
    }

    long long next[26];
    for (int step = 0; step < t; step++) {
        memset(next, 0, sizeof(next));

        next[0] = v[25];  // 'z' → 'a'
        next[1] = (v[0] + v[25]) % MOD;  // 'a' → 'b' + 'z' → 'b'
        for (int i = 2; i < 26; i++) {
            next[i] = v[i - 1];
        }

        memcpy(v, next, sizeof(v));
    }

    long long total = 0;
    for (int i = 0; i < 26; i++) {
        total = (total + v[i]) % MOD;
    }

    return (int)total;
}