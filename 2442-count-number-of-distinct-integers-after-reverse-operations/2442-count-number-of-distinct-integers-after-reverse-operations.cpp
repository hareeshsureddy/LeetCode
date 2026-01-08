class Solution {
public:
int reverseNum(int num){
    int res=0;
    while(num){
        res*=10;
        res+=(num%10);
        num/=10;
    }
    return res;
}
    int countDistinctIntegers(vector<int>& nums) {
        int countDistinctIntegers=0;
        unordered_set<int> us;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(us.insert(nums[i]).second){
                countDistinctIntegers++;
            }
            if(us.insert(reverseNum(nums[i])).second)
            countDistinctIntegers++;
        }
        return countDistinctIntegers;
    }
};