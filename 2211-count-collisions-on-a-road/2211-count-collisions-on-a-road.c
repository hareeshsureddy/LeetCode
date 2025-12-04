/*Test case:- "SSRSSRLLRSLLRSRSSRLRRRRLLRRLSSRR"*/
int countCollisions(char* directions) {
    int top=-1;
    int len=strlen(directions);
    int countCollisions=0;        
    for(int i=0;i<len;i++){
        if(top<0 || directions[i]=='R' ){
            directions[++top]=directions[i];
            continue;
        }
        if(directions[i]=='S'){
            if(directions[top]=='R')
               countCollisions+=1;
            directions[top]='S';
        }else{
            if(directions[top]=='R'){
                 countCollisions+=2;
                 directions[top]='S';
            }else if(directions[top]=='S'){
                 countCollisions+=1;
            }else{
                directions[++top]=directions[i];
            }
        }
        while(top>0 && directions[top]=='S' && directions[top-1]=='R'){
                directions[--top]='S';
                countCollisions+=1;
        }
    }
    return countCollisions;
}