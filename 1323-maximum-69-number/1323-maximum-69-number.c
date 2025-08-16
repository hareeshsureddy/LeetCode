int maximum69Number (int num) {
    int temp=num,cnt=0;
    while(temp){
            cnt++;
            temp/=10;
    }
    uint8_t *res=(uint8_t*)malloc(sizeof(uint8_t)*(cnt));
    int i=cnt-1;
   for(;i>=0;i--){
        res[i]=num%10;
        num/=10;
   }
   i++;
   while(i<cnt){
    if(res[i]==6){
        res[i]=9;
        break;
    }
    i++;
   }
   num=0,i=0;
   for(;i<cnt;i++){
    num*=10;
    num+=res[i];
   }
   free(res);
   return num;
   /* sprintf(res,"%d",num);
    int i=0;
    while(res[i]){
        if(res[i]=='6'){
        res[i]='9';
        break;
        }
        i++;
    }
    return atoi(res);
    */
}