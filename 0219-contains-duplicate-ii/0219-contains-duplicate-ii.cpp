class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len=nums.size();
        unordered_set<int> st;
        int i=0,j=0;
        while(j<len){
            if(abs(j-i)>k)
            st.erase(nums[i++]);
            if(st.find(nums[j])!=st.end())
            return true;
            st.insert(nums[j++]);
        }
        return false;
    }
};