class Solution {
public:

void funn(vector<int> nums,vector<vector<int>> &ans,vector<int>&curr, int n,int start){
    if(n==start){
        ans.push_back(curr);
        return;
    }
        curr.push_back(nums[start]);
        funn(nums,ans,curr,n,start+1);
curr.pop_back();
        funn(nums,ans,curr,n,start+1);

}




    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        int n=nums.size();

        funn(nums,ans,curr,n,0);
        return ans;


    }
};