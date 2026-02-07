int minimumDeletions(char* s) {
    int len=strlen(s);
    int idx=0;
    int minimumDeletions=0;
   for(int i=0;i<len;i++){
        if(idx>0){
            if(s[idx-1]=='b' && s[i]=='a'){
                idx--;
                 minimumDeletions++;
            }else{
                s[idx++]=s[i];
            }
        }else{
            s[idx++]=s[i];
        }
   }
   return  minimumDeletions;
}