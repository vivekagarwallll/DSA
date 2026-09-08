class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
                vector<int>ans(n,-1);
        for(int i =0;i<n;i++){
            for(int j=i+1;j<=i+n-1;j++){
                int idx= j%n;
                if(arr[idx]>arr[i]){
                    ans[i]=arr[idx];
                    break;
                }
            }
        }
        return ans;
               }
};