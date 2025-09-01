int compareVersion(char* version1, char* version2) {
    while(1){
        long long num1=0;
        while(*version1 && *version1!='.'){
            if(!(*version1-'0'==0 && num1==0)){
                    num1+=*version1-'0';
                    num1*=10;
            }
            *version1++;
        }
        long long num2=0;
        while(*version2 && *version2!='.'){
            if(!(*version2-'0'==0 && num2==0)){
                    num2+=*version2-'0';
                    num2*=10;
            }
            *version2++;
        }
        if(num1>num2) return  1;
        if(num1<num2) return -1;
        if(*version1) version1++;
        else
        break;
        if(*version2) version2++;
        else
        break;
    }
    while(*version1){
            if(*version1!='.' && *version1!='0')
            return  1;
            *version1++;
        }
    while(*version2){
            if(*version2!='.' && *version2!='0')
            return  -1;
            *version2++;
        }
    return 0;
}