class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len=strs.size();
        vector<vector<string>> result;
        unordered_map<string,vector<string>>map;
        for(int i=0;i<len;i++){
            string temp=strs[i];
            sort(begin(temp),end(temp));
            map[temp].push_back(strs[i]);
        }
        for(auto it:map){
            result.push_back(it.second);
        }
        return result;
    }
};