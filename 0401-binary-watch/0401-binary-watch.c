/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
char** readBinaryWatch(int turnedOn, int* returnSize) {
    *returnSize=1;
    char** readBinaryWatch=(char**)malloc(sizeof(char*)*10);
    char* rBw=(char*)malloc(sizeof(char)*6);
    strcpy(rBw,"0:00");
    readBinaryWatch[0]=rBw;
    if(turnedOn==0) return readBinaryWatch;
    else if(turnedOn>8){
        *returnSize=0;
        return readBinaryWatch;
    }
    return readBinaryWatch;
}

*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
static int popcount(int x) {
    int c = 0;
    while (x) {
        c += (x & 1);
        x >>= 1;
    }
    return c;
}

char** readBinaryWatch(int turnedOn, int* returnSize) {
    int cap = 720;
    char** res = (char**)malloc(sizeof(char*) * cap);
    int sz = 0;

    for (int hour = 0; hour < 12; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            if (popcount(hour) + popcount(minute) == turnedOn) {
                char buf[6];
                sprintf(buf, "%d:%02d", hour, minute);
                res[sz] = (char*)malloc(strlen(buf) + 1);
                strcpy(res[sz], buf);
                sz++;
            }
        }
    }

    *returnSize = sz;
    return res;
}