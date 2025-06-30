class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int num : nums) freq[num]++;
        
        int ans = 0;
        for (auto& [key, val] : freq) {
            if (freq.count(key + 1)) {
                ans = max(ans, val + freq[key + 1]);
            }
        }
        return ans;
    }
};