bool checkIfPangram(char* sentence) {
    int map[26]={0};
    while(*sentence){
        map[*sentence++-'a']++;
    }
    for(int i=0;i<26;i++){
        if(!map[i]) return false;
    }
    return true;
}