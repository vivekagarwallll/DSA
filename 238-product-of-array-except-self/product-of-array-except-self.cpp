class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
ans[0]=1;
        for(int i=1;i<n;i++){
          ans[i]=arr[i-1]*ans[i-1];  
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*suffix;
            suffix=suffix * arr[i];


        }

return ans;
    }
};