int minimumRecolors(char* blocks, int k) {
    int min=k;
    int j=0,W=0;
    for (int i=0;i<k;i++){
        if(blocks[i]=='W')
        W++;
    }
    min=(W<min)?W:min;
    for (int i=k;blocks[i];i++){
       if(blocks[i]=='W')
       W++;
       if(blocks[j]=='W')
       W--;
       min=(W<min)?W:min;
        j++;
    }
    return min;
}