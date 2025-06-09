int minLength(char* s) {
    char* stack=(char*)malloc(strlen(s)*sizeof(char));
    int top=0,i=0;
    while(s[i]){
        stack[top++]=s[i++];
        if(top>=2){
            if(stack[top-2]=='A' && stack[top-1]=='B')
            top-=2;
            else
            if(stack[top-2]=='C' && stack[top-1]=='D')
            top-=2;          
        }
    }
    return top;
}