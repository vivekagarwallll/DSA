class Solution {
public:
void funn(vector<vector<int>>&ans,vector<int>&curr,vector<int>& arr,int target,int n,int start,int sum){
      if(target==sum){
        ans.push_back(curr);
        return; }
        if(sum>target || n==start){
        return;}
 curr.push_back(arr[start]);   
sum=sum+arr[start];
if(sum<=target){funn(ans,curr,arr,target,n,start,sum);}
curr.pop_back();
sum=sum-arr[start];

if(sum<=target){funn(ans,curr,arr,target,n,start+1,sum);}


}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
         vector<vector<int>>ans;
         vector<int>curr;
        int n=arr.size();
        int sum=0;
        funn(ans,curr,arr,target,n,0,sum);
        return ans;
    }
};