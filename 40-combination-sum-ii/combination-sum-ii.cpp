class Solution {
public:

void funn(vector<int>& arr,vector<vector<int>>& ans,vector<int>&curr,int target,int idx,int start){
if(target==0){
    ans.push_back(curr);
    return;
}


for(int i=start;i<arr.size();i++){
    if(i>start && arr[i]==arr[i-1]){
        continue;
    }

    if(arr[i]>target){
        break;
    }
    curr.push_back(arr[i]);
            funn(arr,ans,curr,target-arr[i],idx+1,i+1);
curr.pop_back();
}

}



    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        int idx=0;
        int start=0;
        vector<vector<int>> ans;
        vector<int>curr;
        sort(arr.begin(),arr.end());
        funn(arr,ans,curr,target,idx,start);
        return ans; 
    }
};