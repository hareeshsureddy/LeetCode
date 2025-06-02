int minOperations(char** logs, int logsSize) {
    int opeCnt=0;
  for (int i=0;i<logsSize;i++){
    if(!strcmp(logs[i],"../")){
    if(opeCnt)
    opeCnt--;
    }
    else if(strcmp(logs[i],"./"))
    opeCnt++;
  }  
  return opeCnt;
}