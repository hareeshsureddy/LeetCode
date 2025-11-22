int compare(const void* a, const void* b) { return *(int*)a - *(int*)b; }
int minOperations(int* tasks, int tasksSize) {
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
}