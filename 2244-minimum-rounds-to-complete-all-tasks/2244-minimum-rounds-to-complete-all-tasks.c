int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
/*
#define SIZE 1000000000
static int map[SIZE+1];
*/
int minimumRounds(int* tasks, int tasksSize) {
    qsort(tasks, tasksSize, sizeof(int), compare);
    int minimumRounds = 0;
    int i = 0;
    int freq;
    while(i<tasksSize){
         freq=1;
        while(i<tasksSize-1 && tasks[i]==tasks[i+1]){
            freq++;
            i++;
        }
        i++;
        if(freq==1) return -1;
        if(freq%3==0) minimumRounds+=freq/3;
        else
        minimumRounds+=freq/3+1;
    }
    return minimumRounds;
    /* Compilation error due to over memory allocation 
    for(int i=0;i<tasksSize;i++) map[tasks[i]]++;
    int minimumRounds = 0;
    for(int i=1;i<(SIZE+1);i++){
        if(map[i]==1) return -1;
        if(map[i]){
        if(map[i]%3==0) minimumRounds+=map[i]/3;
        else
        minimumRounds+=(map[i]/3)+1;
        }
    }
    return minimumRounds;
    */
    /* Failing test 5,5,5,5
    qsort(tasks, tasksSize, sizeof(int), compare);
    int minimumRounds = 0;
    int i = 0;
    while (i < tasksSize) {
        if (i < tasksSize - 1 && tasks[i] == tasks[i + 1]) {
            if (i < tasksSize - 2 && tasks[i] == tasks[i + 2]) {
                i += 3;
            } else {
                i += 2;
            }
        } else
            return -1;
        minimumRounds++;
    }
    return minimumRounds;
    */
}