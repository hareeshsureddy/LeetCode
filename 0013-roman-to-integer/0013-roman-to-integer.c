int romanToInt(char* s) {
    int len=strlen(s);
    int sum=0,i=0;
    while(i<=len && s[i]!='\0'){
        if(s[i]=='I'){
            if(s[i+1]=='V'){
            sum+=4;
            i++;
            }
            else if(s[i+1]=='X'){
            sum+=9;
            i++;
            }
            else
            sum+=1;
        }
       else if(s[i]=='X'){
            if(s[i+1]=='L'){
            sum+=40;
            i++;
            }
            else if(s[i+1]=='C'){
            sum+=90;
            i++;
            }
            else
            sum+=10;
        }
       else if(s[i]=='C'){
            if(s[i+1]=='D'){
            sum+=400;
            i++;
            }
            else if(s[i+1]=='M'){
            sum+=900;
            i++;
            }
            else
            sum+=100;
        }
        else if(s[i]=='V' )
        sum+=5;
        else if(s[i]=='L' )
        sum+=50;
        else if(s[i]=='D')
        sum+=500;
        else
        sum+=1000;
        i++;
    }
    return sum;
}