int maximumDifference(int* nums, int numsSize) {
    /*
   int minIndex,maxIndex,tryIndex=0,result=0;
   while(tryIndex<=numsSize-2 ){
    minIndex=0;
   for(int i=1;i<numsSize-tryIndex;i++){
        minIndex=(nums[minIndex]>nums[i])?i:minIndex;
   }
        maxIndex=minIndex;
      for(int i=minIndex+1;i<numsSize;i++){
        maxIndex=(nums[maxIndex]<nums[i])?i:maxIndex;
   }
   tryIndex++;
   if(minIndex<maxIndex)
   result=(nums[maxIndex]-nums[minIndex]>result)?nums[maxIndex]-nums[minIndex]:result;
 }
 if(minIndex<maxIndex)  return result;
 else
 return -1;
 */
int min=nums[0],maxDiff=0;
for (int i=1;i<numsSize;i++){
    if(min<nums[i])
    maxDiff=(maxDiff<nums[i]-min)?nums[i]-min:maxDiff;
    else
    min=nums[i];

}
if(maxDiff) return maxDiff;
else return -1;
}