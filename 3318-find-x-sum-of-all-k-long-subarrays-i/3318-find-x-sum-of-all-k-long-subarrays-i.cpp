class Solution {
public:
typedef pair<int,int> P; //freq & element
    int findTopXsum(unordered_map<int,int>&mp,int x){
        priority_queue<P, vector<P>,greater<P>> PQ;
        for(auto &it:mp){
            PQ.push({it.second,it.first});
            if(PQ.size()>x){
                PQ.pop(); // removing smallst element from the queue
            }
        }
        int sum=0;
        while(!PQ.empty()){
            auto[freq,val]=PQ.top();
            PQ.pop();
            sum+=freq*val;
        }
        return sum;
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        unordered_map<int,int>mp;
        vector<int> result;
        int i=0;
        int j=0;
        while(j<n){
            mp[nums[j]]++;
            if(j-i+1==k){
                result.push_back(findTopXsum(mp,x));
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return result;
    }
};