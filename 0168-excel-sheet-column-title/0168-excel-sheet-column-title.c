char* convertToTitle(int columnNumber) {
    //2147483647
    char *result=(char*)malloc(10*sizeof(char));
    int index=0;
    while(columnNumber){
        columnNumber--;
        int reminder=columnNumber%26;
        result[index++]='A'+reminder;
        columnNumber/=26;
    }
    result[index]='\0';
    int i=0,j=index-1;
    while(i<j){
        char temp=result[i];
        result[i]=result[j];
        result[j]=temp;
        i++;
        j--;
    }
    return result;
}