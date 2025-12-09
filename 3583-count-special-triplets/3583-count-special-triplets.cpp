#define MOD7 1000000007
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int>mp_left;
        unordered_map<int,int>mp_right;
        int specialTriplets=0;
        for(int &num:nums){
            mp_right[num]++;
        }
        for(int &num:nums){
            mp_right[num]--;
            int left=mp_left[num*2];
            int right=mp_right[num*2];
            specialTriplets=(specialTriplets+(1LL*left*right))%MOD7;
            mp_left[num]++;
        }
        return specialTriplets;
    }
};