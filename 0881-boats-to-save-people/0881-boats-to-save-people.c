int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int numRescueBoats(int* people, int peopleSize, int limit) {
    qsort(people,peopleSize,sizeof(int),compare);
    int i=0,j=peopleSize-1;
    int numRescueBoats=0;
    while(i<=j){
        if(people[j]+people[i]<=limit){
            j--;
            i++;
        }else{
            j--;
        }
        numRescueBoats++;
    }
    return numRescueBoats;
}