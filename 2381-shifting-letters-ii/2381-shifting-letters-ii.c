char* shiftingLetters(char* s, int** shifts, int shiftsSize, int* shiftsColSize) {
    int len=strlen(s);
    int *map=(int*)calloc(len+1,sizeof(int));
    for (int i=0;i<shiftsSize;i++){
        map[shifts[i][0]]+=(shifts[i][2])?1:-1;
        map[(shifts[i][1])+1]+=(shifts[i][2])?-1:1;
    }
    int IamWhere=0;
    for(int i=0;i<len;i++){
        IamWhere+=map[i];
        if(IamWhere>=0)
        s[i]=(((s[i]-97)+IamWhere)%26)+97;
        else
        s[i]=(((((s[i]-97)+(IamWhere%26)+26)%26))%26)+97;
    }
    s[len]='\0';
    return s;
}