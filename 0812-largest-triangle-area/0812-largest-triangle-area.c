double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    double maxArea=0.0;
    for(int i=0;i<pointsSize;i++){
        for(int j=i+1;j<pointsSize;j++){
            for(int k=j+1;k<pointsSize;k++){
                double x1=points[i][0];
                double y1=points[i][1];

                double x2=points[j][0];
                double y2=points[j][1];
            
                double x3=points[k][0];
                double y3=points[k][1];

                double Area=(0.5)*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
                maxArea=(maxArea<Area)?Area:maxArea;
            }
        }
    }
    return maxArea;
}
/*
double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    double max_area = 0.0;
    for (int i = 0; i < pointsSize; ++i) {
        for (int j = i + 1; j < pointsSize; ++j) {
            for (int k = j + 1; k < pointsSize; ++k) {
                int x1 = points[i][0], y1 = points[i][1];
                int x2 = points[j][0], y2 = points[j][1];
                int x3 = points[k][0], y3 = points[k][1];
                double area = 0.5 * fabs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
                if (area > max_area) {
                    max_area = area;
                }
            }
        }
    }
    return max_area;
}
*/