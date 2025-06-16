int maximumDifference(int* nums, int numsSize) {
   int minIndex,maxIndex,tryIndex=0;
   while(minIndex>=maxIndex && tryIndex<=numsSize-2 ){
    minIndex=0;
   for(int i=1;i<numsSize-tryIndex;i++){
        minIndex=(nums[minIndex]>nums[i])?i:minIndex;
   }
        maxIndex=minIndex;
      for(int i=minIndex+1;i<numsSize;i++){
        maxIndex=(nums[maxIndex]<nums[i])?i:maxIndex;
   }
   tryIndex++;
 }
 if(minIndex<maxIndex)  return nums[maxIndex]-nums[minIndex];
 else
 return -1;
}