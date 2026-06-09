class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;
for(auto it:mpp){
pq.push({it.second,it.first});
if(pq.size()>k){
    pq.pop();
}
}
vector<int>ans;
for(int i=0;i<k;i++){
ans.push_back(pq.top().second);
pq.pop();
}
return ans;
    }
};