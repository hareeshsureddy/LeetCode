int countBinarySubstrings(char* s) {
    int len = strlen(s);
    int countBinarySubstrings=0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            int onesCnt = 0;
            int zerosCnt = 0;
            bool status;
            if (s[i] == '0')
                status = false;
            else
                status = true;
                int cnt=0;
            for (int k = i; k <= j; k++) {
                if (status) {
                    if (s[k] == '0') {
                        zerosCnt++;
                        status = false;
                        cnt++;
                    } else
                        onesCnt++;
                } else {
                    if (s[k] == '1') {
                        onesCnt++;
                        status = true;
                        cnt++;
                    } else
                        zerosCnt++;
                }
            }
            if(cnt==1 && zerosCnt==onesCnt){
                    countBinarySubstrings++;
            }
        }
    }
    return countBinarySubstrings;
}