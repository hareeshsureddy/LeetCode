class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float max=0;
        int index=0;
        int area=0;
        int len=dimensions.size();
        for(int i=0;i<len;i++){
            float diagonal=sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
            if(max<diagonal){
                max=diagonal;
                index=i;
                area=dimensions[i][0]*dimensions[i][1];
            }else if(max==diagonal){
                   if(area<dimensions[i][0]*dimensions[i][1])
                   area=dimensions[i][0]*dimensions[i][1];
            }
        }
        return area;
    }
};