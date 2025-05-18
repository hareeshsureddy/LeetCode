bool isPathCrossing(char* path) {
    int16_t len=strlen(path);
    int16_t x=0,y=0;
    int16_t (*map)[2]=calloc(len+1,sizeof(int16_t*));
    for(int i=0;i<len;i++){
        if(path[i]=='N')
        y++;
        else if(path[i]=='S')
        y--;
        else if(path[i]=='E')
        x++;
        else
        x--;
        for(int j=0;j<=i;j++){
            if(x==map[j][0] && y==map[j][1])
            return true;
        }
        map[i+1][0]=x;
        map[i+1][1]=y;
    }
    return false;
}