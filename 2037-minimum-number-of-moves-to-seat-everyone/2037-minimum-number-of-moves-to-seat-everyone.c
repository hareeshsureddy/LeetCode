int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    qsort(seats,seatsSize,sizeof(seats[0]),compare);
    qsort(students,studentsSize,sizeof(students[0]),compare);
    int result=0;
    for (int i=0;i<studentsSize;i++){
        result+=abs(seats[i]-students[i]);
    }
    return result;
}