int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int minTimeToVisitAllPoints=0;
        int x=points[0][0];
        int y=points[0][1];
    for(int i=1;i<pointsSize;i++){
        while(x!=points[i][0] || y!=points[i][1]){
            if(x<points[i][0])
            x++;
            else if(x>points[i][0])
            x--;
            if(y<points[i][1])
            y++;
            else if(y>points[i][1])
            y--;
            minTimeToVisitAllPoints++;      
        }
    }
    return minTimeToVisitAllPoints;
}