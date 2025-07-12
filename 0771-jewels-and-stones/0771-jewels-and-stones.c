int numJewelsInStones(char* jewels, char* stones) {
    int map[58]={0};
    while(*stones){
        map[(*stones++)-'A']++;
    }
    int res=0;
        while(*jewels){
        res+=map[(*jewels++)-'A'];
    }
    return res;
}