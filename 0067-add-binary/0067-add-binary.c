char* addBinary(char* a, char* b) {
    int len1=strlen(a),len2=strlen(b);
    int len3=fmax(len1,len2)+2;
    char *result=(char*)malloc(len3*sizeof(a[0]));
    int i=len1-1,j=len2-1,index=0,carry=0;
    while(i>=0 && j>=0){
        if(a[i]=='1'){
            if(b[j]=='1'){
                // a=1 & b=1
                if(carry)
                result[index++]='1';
                else
                result[index++]='0';
                carry=1;
            }else{
                // a=1 & b=0
                if(carry)
                result[index++]='0';
                else
                result[index++]='1';
            }
        }else{
            if(b[j]=='1'){
                // a=0 & b=1
                if(carry)
                result[index++]='0';
                else
                result[index++]='1';                
            }else{
                // a=0 & b=0
                if(carry){
                result[index++]='1';
                carry=0;
                }
                else
                result[index++]='0';                
            }
        }
        i--;
        j--;
    }
        while(i>=0){
        if(carry){
            if(a[i]=='1'){
            result[index++]='0';
            }
            else{
            result[index++]='1';
            carry=0;
            }
        }else
        result[index++]=a[i];
            i--;
        }
        while(i>=0){
        if(carry){
            if(b[j]=='1'){
            result[index++]='0';
            }
            else{
            result[index++]='1';
            carry=0;
            }
        }else
        result[index++]=b[j];
            j--;
        }
        if(carry)
        result[index++]='1';
        for(int i=0;i<index/2;i++){
            char temp=result[i];
            result[i]=result[index-1-i];
            result[index-1-i]=temp;
        }
        result[index]='\0';
        return result;
}