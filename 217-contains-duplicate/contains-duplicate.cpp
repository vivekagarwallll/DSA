class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(arr[i])==mpp.end()){
                mpp[arr[i]] = 1;
                   }
                   else{
                    return true;
                   }
        }
        return false;
            }
};