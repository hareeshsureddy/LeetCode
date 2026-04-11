int minimumDistance(int* nums, int numsSize) {
    int minimumDistance=-1;
    for(int i=0;i<numsSize;i++){
        int j=i+1;
        bool status=false;
        for(;j<numsSize;j++){
            if(nums[i]==nums[j]) break;
        }
        int k=j+1;
        for(;k<numsSize;k++){
            if(nums[i]==nums[k]) {
                status=true;
                break;
            }
        }
        if(status){
            int distance=abs(i - j) + abs(j - k) + abs(k - i);
            if(minimumDistance==-1)
            minimumDistance=distance;
            if(distance<minimumDistance)
            minimumDistance=distance;

        }
    }
    return minimumDistance;
}