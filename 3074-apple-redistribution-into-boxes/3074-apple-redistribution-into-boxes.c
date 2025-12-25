int compare(const void *a, const void *b){
    return *(int*)b-*(int*)a;
}

int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    qsort(capacity,capacitySize,sizeof(int),compare);
    int j=0;
    for(int i=0;i<appleSize;i++){
        int curApple=apple[i];
        while(curApple>=1){
            if (curApple<=capacity[j]){
                capacity[j]-=curApple;
                break;
            }else{
                curApple-=capacity[j];
                j++;
            }
        }
    }
    return j+1;
}