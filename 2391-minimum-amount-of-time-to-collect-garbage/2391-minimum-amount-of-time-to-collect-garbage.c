/*
int garbageCollection(char** garbage, int garbageSize, int* travel, int travelSize) {
    for(int i=1;i<travelSize;i++){
        travel[i]+=travel[i-1];
    }
    char GMP[]="GMP";
    int time=0;
    for(int i=0;i<3;i++){
            int latestIndex=0;
        for(int j=0;j<garbageSize;j++){
            int k=0;
            while(garbage[j][k]){
                if(garbage[j][k]==GMP[i]){
                    latestIndex=j;
                    time++;
                }
                k++;
            }
        }
        if(latestIndex)
        time+=travel[latestIndex-1];
    }
    return time;
} 
*/
int garbageCollection(char** garbage, int garbageSize, int* travel, int travelSize) {
        int time=0;
            for(int i=1;i<travelSize;i++){
                travel[i]+=travel[i-1];
            }
        int latestIndexG=0,latestIndexM=0,latestIndexP=0;
        for(int j=0;j<garbageSize;j++){
            int k=0;
            while(garbage[j][k]){
                if(garbage[j][k]=='G')
                latestIndexG=j;
                else if(garbage[j][k]=='P')
                latestIndexP=j;
                else
                latestIndexM=j;
                k++;
            }
            time+=k;
        }
        if(latestIndexP)
        time+=travel[latestIndexP-1];
        if(latestIndexG)
        time+=travel[latestIndexG-1];
        if(latestIndexM)
        time+=travel[latestIndexM-1];
        return time;
}