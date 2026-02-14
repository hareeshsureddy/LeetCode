
static double map[101][101]={0};
double champagneTower(int poured, int query_row, int query_glass){
        memset(map,0,sizeof(map));
        map[0][0]=(double)poured;
        for(int i=0;i<=query_row;i++){
            for(int j=0;j<=i;j++){
                double extra=(map[i][j]-1.0)/2.0;
                if(extra>0){
                map[i+1][j]+=extra;
                map[i+1][j+1]+=extra;
                }
            }
        }
        return fmin(1.0,map[query_row][query_glass]);
}