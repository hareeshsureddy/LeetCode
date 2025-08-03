/*class Solution {
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
};*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len=strs.size();
        vector<vector<string>> result;
        unordered_map<string,vector<string>>map;
        for(int i=0;i<len;i++){
            //string temp=strs[i];
            //sort(begin(temp),end(temp));
            int mp[26]={0};
            int j=0;
            while(strs[i][j]){
                mp[strs[i][j++]-'a']++;
            }
            char* temp=(char*)malloc((j+1)*sizeof(char));
            j=0;
            for(int k=0;k<26;k++){
                while(mp[k]--){
                    temp[j++]=k+'a';
                }
            }
            temp[j]='\0';
            map[temp].push_back(strs[i]);
            free(temp);
        }
        for(auto it:map){
            result.push_back(it.second);
        }
        return result;
    }
};