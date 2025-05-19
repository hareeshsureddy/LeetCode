int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    int i=0,j=0;
    bool found=true;
    while(found){
    found=false;
    for(int i=0;i<sandwichesSize;i++){
        if(students[i]<0) continue;
        if(students[i]==sandwiches[j]){
            found=true;
            students[i]=-1;
            studentsSize--;
            j++;
        }
    }
    }
    return studentsSize;
}