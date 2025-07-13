

char * interpret(char * command){
        char *res=(char*)malloc((strlen(command)+1)*sizeof(char));
        int i=0,j=0;
        while(command[i]){
            if(command[i]=='G') res[j++]='G';
            else if(command[i+1]=='a')  {
                res[j++]='a';
                res[j++]='l';
                i+=3;
            }else{
                res[j++]='o';
                i+=1;
            }
            i++;
        }
        res[j]='\0';
        return res;
}