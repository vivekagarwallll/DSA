class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        int n=str.size();
        vector<string>s;
        s=str;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<n;i++){
            sort(s[i].begin(),s[i].end());
            mpp[s[i]].push_back(str[i]);

        }
        vector<vector<string>>v;
        for(auto it : mpp){
            v.push_back(it.second);
        }
        return v;
            }
};