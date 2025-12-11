bool checkString(char* s) {
   int i=0;
   while(s[i]){
    if(s[i]=='a') i++;
    else
    break;
   }
   if(!s[i]) return true;
   while(s[i]){
    if(s[i]=='b') i++;
    else
    return false;;
   }
   return true;
}