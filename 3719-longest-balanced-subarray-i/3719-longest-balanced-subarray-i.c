/* Time Limit Exceeded
930 / 999 testcases passed*/
static bool map[100001];
int longestBalanced(int* nums, int numsSize) {
    int longestBalanced = 0;
    for (int start = 0; start < numsSize; start++) {
        int oddCnt = 0;
        int evenCnt = 0;
        memset(map, 0, sizeof(map));
        for (int end = start; end < numsSize; end++) {
            int i = end;
            if (!map[nums[i]]) {
                if (nums[i] & 1)
                    oddCnt++;
                else
                    evenCnt++;
                map[nums[i]] = true;
            }
                if (oddCnt == evenCnt) {
                    int currentLen = (end - start + 1);
                    if (longestBalanced < currentLen)
                        longestBalanced = currentLen;
                }
        }
    }
    return longestBalanced;
}

/* Time Limit Exceeded
930 / 999 testcases passed*/ /*
static bool map[100001];
int longestBalanced(int* nums, int numsSize) {
    int longestBalanced=0;
    for(int start=0;start<numsSize;start++){
        for(int end=start;end<numsSize;end++){
            int oddCnt=0;
            int evenCnt=0;
            memset(map,0,sizeof(map));
            for(int i=start;i<=end;i++){
                if(!map[nums[i]]){
                if(nums[i]&1)
                oddCnt++;
                else
                evenCnt++;
                map[nums[i]]=true;
                }
            }
            if(oddCnt==evenCnt){
                int currentLen=(end-start+1);
                if(longestBalanced<currentLen)
                longestBalanced=currentLen;
            }
        }
    }
    return longestBalanced;
} */