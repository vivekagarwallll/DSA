class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n);
        stack<int>st;
        for(int i=n*2-1;i>=0;i--){
            int idx=i%n;
            while(!st.empty() && st.top()<=arr[idx]){
                st.pop();
            }
            if(!st.empty() && st.top()>arr[idx]){
                if(i<n){
ans[i]=st.top();
                }
st.push(arr[idx]);
            }
            if(st.empty()){
                if(i<n){
ans[i]=-1;
                }
               st.push(arr[idx]); 
                            }
            }
        return ans;
    }
};