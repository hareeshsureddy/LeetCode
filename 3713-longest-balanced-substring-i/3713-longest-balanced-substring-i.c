static bool map[26];
int longestBalanced(char* s) {
    int longestBalanced = 0;
    int numsSize = strlen(s);
    for (int start = 0; start < numsSize; start++) {
        int cnt[26] = {0};
        for (int end = start; end < numsSize; end++) {
            int i = end;
            int matchCnt = 0;
            cnt[s[i] - 'a']++;
            bool status = true;
            for (int k = 0; k < 26; k++) {
           //     printf("%d=%d ", k, cnt[k]);
                if (matchCnt) {
                    if (cnt[k] && cnt[k] != matchCnt) {
                        status = false;
                        break;
                    }
                } else {
                    matchCnt = cnt[k];
                }
            }
          //  printf("\n/***/\n ");
            if (status) {
                int currentLen = (end - start + 1);
                if (longestBalanced < currentLen)
                    longestBalanced = currentLen;
           //     printf("%d ", longestBalanced);
            } else {
          //      printf("f ");
            }
        //    printf("\n");
        }
      //  printf("\n");
    }
    return longestBalanced;
}