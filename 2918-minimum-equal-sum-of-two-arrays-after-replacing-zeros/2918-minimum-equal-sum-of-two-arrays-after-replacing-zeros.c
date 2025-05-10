long long minSum(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    long long sum1=0,ZeroCnt1=0,sum2=0,ZeroCnt2=0;
    for( int i=0;i<nums1Size;i++){
        if(nums1[i])
        sum1+=nums1[i];
        else
        ZeroCnt1++;
    }
    for( int i=0;i<nums2Size;i++){
        if(nums2[i])
        sum2+=nums2[i];
        else
        ZeroCnt2++;
    }
    if((sum1+ZeroCnt1) ==  (sum2+ZeroCnt2)) return (sum1+ZeroCnt1);
    if ((sum1+ZeroCnt1) >  (sum2+ZeroCnt2))
    return (ZeroCnt2)?(sum1+ZeroCnt1):-1;
    else
    return (ZeroCnt1)?(sum2+ZeroCnt2):-1;
}