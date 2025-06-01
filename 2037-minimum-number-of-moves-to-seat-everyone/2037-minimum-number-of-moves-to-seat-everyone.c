int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
      int result=0;
    /* Counting Sort method*/
    int map1[101]={0};
    int map2[101]={0};
    for (int i=0;i<seatsSize;i++){
        map1[seats[i]]++;
        map2[students[i]]++;
    }
    int i=0,j=0;
    while(i<101 && j<101){
        if(map1[i]==0) i++;
        if(map2[j]==0) j++;
        if(i<101 && j<101 && map1[i]!=0 && map2[j]!=0){
            result+=abs(i-j);
            map1[i]--;
            map2[j]--;
        }
    }
    return result;
 /*   qsort(seats,seatsSize,sizeof(seats[0]),compare);
    qsort(students,studentsSize,sizeof(students[0]),compare);
    for (int i=0;i<studentsSize;i++){
        result+=abs(seats[i]-students[i]);
    }  
    return result; */
    /*
    int sum1=0,sum2=0;
    for (int i=0;i<studentsSize;i++){
            sum1+=seats[i];
            sum2+=students[i];
    }
    return abs(sum1-sum2);
    */
}