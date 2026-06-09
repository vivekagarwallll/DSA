class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mpp){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        vector <int>ans;
for(int i=0;i<k;i++){
    ans.push_back(v[i].second);
}
        return ans;
            }
};