class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int len= nums.size();

        unordered_map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<len;i++){
            sum+=nums[i];
            int rem=sum%k;

            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>=2) return true;
            }else{
                mp[rem]=i;
            }
        }
        return false;
    }
};