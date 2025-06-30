int secondHighest(char* s) {
    int max1=-1,max2=-1;
        int i=0;
        while(s[i]){
            if((int)s[i]<97){
                int digit=s[i]-48;
                if(digit>max1){
                    max2=max1;
                    max1=digit;
                }else{
                    if(digit<max1 && digit>max2) max2=digit;
                }
            }
            i++;
        }
        if(max1==max2) return -1;
    return max2;
}