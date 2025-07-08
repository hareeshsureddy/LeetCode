char map[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
char* toHex(int num) {
    uint32_t NUM=(uint32_t)num;
    char *res=(char*)malloc(9*sizeof(char));
    int i=0;
    while(NUM){
        res[i++]=map[NUM%16];
        NUM/=16;
    }
    res[i--]='\0';
    for(int j=0;j<i;i--,j++){
        char temp=res[j];
        res[j]=res[i];
        res[i]=temp;
    }
    return res;
}