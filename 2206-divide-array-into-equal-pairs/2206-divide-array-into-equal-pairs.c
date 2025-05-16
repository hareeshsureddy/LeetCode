bool divideArray(int* nums, int numsSize) {
    if (numsSize%2!=0) return false;
    /*
    //int *Map=(int *)calloc(numsSize,sizeof(int));
    int Map[501]={0};
    for(int i=0;i<numsSize;i++)
    {
        Map[nums[i]]++;
    }
    for(int i=0;i<numsSize;i++)
    {
        if (Map[nums[i]]%2!=0 && Map[nums[i]])
        return false;
    }
    */
    /*
    for(int i=0;i<numsSize-1;i++)
    {
        for (int j=0;j<numsSize-i-1;j++)
        {
            if( nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for (int i=1;i<numsSize;i++)
    {
        if (nums[i-1]^nums[i++])
        return false;
    }
    */
    int Map[501]={0};
    for (int i=0;i<numsSize;i++)
    {
        if(Map[nums[i]])
        Map[nums[i]]--;
        else
        Map[nums[i]]++;
    }
    for (int i=0;i<numsSize;i++)
        if (Map[nums[i]]) return false;
    return true;
}