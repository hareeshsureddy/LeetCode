int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int countMatches=0;
    int idx=0;
    if(!strcmp(ruleKey,"type"))
    idx=0;
    else if(!strcmp(ruleKey,"color"))
    idx=1;
    else
    idx=2;
    for(int i=0;i<itemsSize;i++){
        if(!strcmp(items[i][idx],ruleValue)){
            countMatches++;
        }
    }
    return countMatches;
}