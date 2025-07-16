int reverseDegree(char* s) {
    int i=0,res=0;
    while(s[i]){
        res+=((26-(s[i]-'a'))*(i+1));
        i++;
    }
    return res;
}