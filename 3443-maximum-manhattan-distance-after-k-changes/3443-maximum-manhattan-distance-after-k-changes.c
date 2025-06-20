int maxDistance(char* s, int k) {
    int W=0,N=0,S=0,E=0,MaxDistance=0;
    int i=0;
    while(s[i]){
    if(s[i]=='E') E++;
    else if(s[i]=='W') W++;
    else if(s[i]=='N')  N++;
    else S++;
    int currMD=abs(E-W)+abs(N-S);
    int steps=i+1;
    int watedSteps=steps-currMD;
    int extra=0;
    if(watedSteps!=0)
    extra=fmin(2*k,watedSteps);
    int finailcurrMID=currMD+extra;
    MaxDistance=fmax(finailcurrMID,MaxDistance);
    i++;
       }
       return MaxDistance;
    /*
    int x2=0,y2=0,maxdistance=0; 
    // if N y+1 else if S y-1
    // if E x+1 else if W x-1
    if(s[0]=='E') x2++;
    else if(s[0]=='W') x2--;
    else if(s[0]=='N')  y2++;
    else y2--;
maxdistance=((abs(x2)+abs(y2))>maxdistance)?(abs(x2)+abs(y2)):maxdistance;    
    int i=1;
    while(s[i]){
        if(k){
    if(s[i]=='E'){
        if(x2>=0){
            x2++;
        }else{
            x2--;
            k--;
        }
    }
    else if(s[i]=='W'){
        if(x2>0){
            x2++;
            k--;
        }else{
            x2--;
        }
    }
    else if(s[i]=='N'){
        if(y2>=0){
            y2++;
        }else{
            y2--;
            k--;
        }
    }
    else {
        if(y2>0){
            y2++;
            k--;
        }else{
            y2--;
        }
     }
        }
        else{
    if(s[i]=='E')      x2++;
    else if(s[i]=='W') x2--;
    else if(s[i]=='N') y2++;
    else               y2--;         
        }
     maxdistance=((abs(x2)+abs(y2))>maxdistance)?(abs(x2)+abs(y2)):maxdistance;
     i++;
    }
    return maxdistance;
    */
}