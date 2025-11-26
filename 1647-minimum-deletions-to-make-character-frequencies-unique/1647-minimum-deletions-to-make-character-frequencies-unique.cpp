class Solution {
public:
    int minDeletions(string s) {
    int freq[26]={0};
    for (int i=0;s[i];i++){
        freq[s[i]-'a']++;
    }
    int minDeletions=0;
    unordered_set<int> st;
    for(int i=0;i<26;i++){
        while(freq[i]>0 && st.find(freq[i])!=st.end()){
            freq[i]--;
            minDeletions++;
        }
        st.insert(freq[i]);
    }
    return minDeletions;
    }
};