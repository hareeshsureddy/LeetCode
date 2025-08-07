int evalRPN(char** tokens, int tokensSize) {
    int *stack=(int*)malloc(tokensSize*sizeof(int));
    int i=0,indexx=0;
    while(i<tokensSize){
        if(!strcmp(tokens[i],"+")||!strcmp(tokens[i],"-")||!strcmp(tokens[i],"*")||!strcmp(tokens[i],"/")){
            switch(tokens[i][0]){
                case '+':
                indexx--;
                stack[indexx-1]=stack[indexx-1]+stack[indexx];
                printf("%d",stack[indexx-1]);
                break;
                case '-':
                indexx--;
                stack[indexx-1]=stack[indexx-1]-stack[indexx];
                break;
                case '*':
                indexx--;
                stack[indexx-1]=stack[indexx-1]*stack[indexx];
                break;
                case '/':
                indexx--;
                stack[indexx-1]=stack[indexx-1]/stack[indexx];
                break;     
                default:
                printf("%d",stack[indexx-1]);
                break;                           
            }
        }else{
            int num=atoi(tokens[i]);
            stack[indexx++]=num;
            printf("%d ",stack[indexx-1]);
        }
        i++;
    }
    return stack[0];
}