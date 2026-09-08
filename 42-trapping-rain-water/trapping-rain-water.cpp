class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int leftmax=0;
        int rightmax=0;
        int total=0;
        int l=0;
        int r=n-1;
        while(l<r){
            leftmax=max(arr[l],leftmax);
            rightmax=max(arr[r],rightmax);
            if(arr[l]<=arr[r]){
                if(arr[l]<leftmax){
                    total=total+(leftmax-arr[l]);
                }
                l++;
            }
            else if(arr[l]>arr[r]){
                if(arr[r]<rightmax){
                    total=total+(rightmax-arr[r]);
                }
                r--;
            }
        }
return total;
    }
};