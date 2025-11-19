int maxOperations(char* s) {
    int maxOperations=0;
    int i=0;
    int len=strlen(s);
    int onesCnt=0;
    while(i<len){
        while(i<len && s[i]=='1'){
            i++;
            onesCnt++;
        }
        if(i<len && s[i]=='0')
        maxOperations+=onesCnt;
        while(i<len && s[i]=='0') i++; 
    }
    return maxOperations;
/* TLE *//*
    int len=strlen(s);
    int maxOpr=0;
    bool status=true;
    int prev=0;
    while(status){
        status=false;
        int i=prev;
        while(i<len-1){
            if(s[i]=='1' && s[i+1]=='0'){
                status=true;
                maxOpr++;
                s[i++]='0';
                while(i<len && s[i]!='1') i++;
                s[i-1]='1';
                break;
            }
            i++;
        }
    }
    return maxOpr;
*/
/*
  long long ans = 0;
    long long ones = 0;
    int n = strlen(s);

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            ++ones;
        } else { // s[i] == '0'
            // If this zero is the last char or is followed by a '1',
            // we just ended a zero block → add all previous ones.
            if (i + 1 == n || s[i + 1] == '1') {
                ans += ones;
            }
        }
    }
    return (int)ans;
*/
}