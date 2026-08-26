class Solution {
public:

void funn(vector<int>&arr,vector<vector<int>>&ans,vector<int>&curr,int n,int start){
    ans.push_back(curr);
for(int i=start;i<arr.size();i++){
    if(i>start && arr[i]==arr[i-1]){
        continue;
    }
curr.push_back(arr[i]);
        funn(arr,ans,curr,n,i+1);
        curr.pop_back();

}



}

    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>curr;
        int n=arr.size();
        int start=0;
sort(arr.begin(),arr.end());
        funn(arr,ans,curr,n,start);
return ans;
    }
};