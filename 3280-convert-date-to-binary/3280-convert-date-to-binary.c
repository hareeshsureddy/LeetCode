char* convertDateToBinary(char* date) {
    char *res=(char*)malloc(24*sizeof(char));
    int num=0,i=0,j=0;
        num=(date[0]-'0')*1000;
        num+=(date[1]-'0')*100;
        num+=(date[2]-'0')*10;
        num+=(date[3]-'0');
        while(num){//year
            res[i++]=num%2+'0';
            num/=2;
        }
        int len=i;
        i--;
        while(j<i){
            char temp=res[i];
            res[i--]=res[j];
            res[j++]=temp;
        }
        res[len]='-';
       j=i=len+1;
        num=(date[5]-'0')*10;
        num+=(date[6]-'0');
        while(num){
            res[i++]=num%2+'0';
            num/=2;
        }
        len=i;
        i--;
        while(j<i){
            char temp=res[i];
            res[i--]=res[j];
            res[j++]=temp;
        }
        res[len]='-';
        j=i=len+1;
        num=(date[8]-'0')*10;
        num+=(date[9]-'0');
        printf("%d",num);
        while(num){
            res[i++]=num%2+'0';
            num/=2;
        }
        len=i;
        i--;
            while(j<i){
            char temp=res[i];
            res[i--]=res[j];
            res[j++]=temp;
        }
        res[len]='\0';
        return res;
}