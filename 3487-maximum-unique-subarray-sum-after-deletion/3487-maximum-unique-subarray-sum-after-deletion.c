/* //Methode-1
int maxSum(int* nums, int numsSize) {
    // Index 0 corresponds to -100, index 200 corresponds to 100
    int freq[201] = {0};    
    int result = 0, max_num = INT_MIN;

    //count the number of occurrences of each number
    for(int i = 0; i < numsSize; ++i){
        freq[nums[i] + 100]++;
        //finding the maximum number in the array
        if(nums[i] > max_num) max_num = nums[i];
    }
    //now we go through and add up all the
    //positive numbers whose frequency is greater than 0
    for(int i = 0; i < 201; ++i){
        int num = i - 100;
        if(freq[i] > 0 && num > 0){
            result += num;
        }
    }
    //if we haven't found any positive numbers, 
    //then we return the largest one from the array.
    if(result != max_num && result == 0){
        return max_num;
    }
    return result;
} */

//Methode-2
int maxSum(int* nums, int numsSize) {
    int sum=0,max=INT_MIN;
    int map[101]={0};
    for(int i=0;i<numsSize;i++){
        if(nums[i]<=0){ 
            max=(max<nums[i])?nums[i]:max;
        }
        else{
        if(map[nums[i]])   nums[i]=0;
        else
        map[nums[i]]=1;
        sum+=nums[i];
        }
    }
    if(!sum) return max;
    else
    return sum;
}