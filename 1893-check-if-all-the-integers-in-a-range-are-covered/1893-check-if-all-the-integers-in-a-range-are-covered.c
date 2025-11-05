#define SIZE 51
static bool map[SIZE];
bool isCovered(int** ranges, int rangesSize, int* rangesColSize, int left,
               int right) {
                memset(map,0,sizeof(map));
    for (int i = 0; i < rangesSize; i++) {
        int start = ranges[i][0];
        int end = ranges[i][1];
        for (int j = start; j <= end; j++) {
            map[j] = true;
        }
    }
    for (int j = left; j <= right; j++) {
        if(!map[j]) return false;
    }
    return true;
}