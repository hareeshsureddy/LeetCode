char* clearDigits(char* s) {
    int len=strlen(s);
    char* stack=(char*)malloc((len+1)*sizeof(char));
    int top=0;
    for(int i=0;i<len;i++){
        stack[top]=s[i];
        if(top>=1){
            if(stack[top]-'a'<0)
            top-=2;
        }
        top++;
    }
    stack[top]='\0';
    return stack;
}