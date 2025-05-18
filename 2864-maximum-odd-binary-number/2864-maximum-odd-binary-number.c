char* maximumOddBinaryNumber(char* s) {
    int len=strlen(s);
    int i=0,j=len-2;
    while(s[len-1]!='1'){
        if(s[j]=='1')
        {
            s[len-1]='1';
            s[j]='0';
            break;
        }
        j--;
    }
    j=1;
    while(j<len-1){
        if(s[i]!='1'){
            if(s[j]=='1'){
                s[i++]='1';
                s[j++]='0';
            }else
            j++;
        }else{
            i++;
            j++;
        }
    }
    return s;
}