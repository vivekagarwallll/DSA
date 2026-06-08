class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int f=target-arr[i];
            if(mpp.count(f)){
                return {mpp[f],i};
            }
            else{
                mpp[arr[i]]=i;
            }
        }
        return {};
    }
};