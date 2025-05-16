long long maximumTripletValue(int* nums, int numsSize) {
    long long int Max=0;
    for (int i=0;i<numsSize-2;i++)
    {
        for (int j=i+1;j<numsSize-1;j++)
        {
        for (int k=j+1;k<numsSize;k++)
        {
            long long int Val=((long long)(nums[i]-nums[j])*nums[k]);
            if (Max<Val) Max=Val;
        }

        }
    }
    return Max;
}