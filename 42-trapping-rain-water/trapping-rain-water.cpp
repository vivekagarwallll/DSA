class Solution {
public:
vector<int> fun1(vector<int>& arr){
           int n=arr.size();
    vector<int>premax(n);
premax[0]=arr[0];
        for(int i=1;i<n;i++){
if(arr[i]>premax[i-1]){
    premax[i]=arr[i];
}
else{
    premax[i]=premax[i-1];
}
}
return premax;
}

vector<int> fun2(vector<int>& arr){
int n=arr.size();
    vector<int>submax(n);
submax[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--){
    if(arr[i]>submax[i+1]){
        submax[i]=arr[i];
    }
    else{
       submax[i]=submax[i+1]; 
    }
}
return submax;
}


    int trap(vector<int>& height) {
        int n=height.size();
        int total=0;
vector<int>premax = fun1(height);
vector<int>submax = fun2(height);

        for(int i=0;i<n;i++){
            int leftmax=premax[i];
            int rightmax=submax[i];
            if(height[i]<leftmax &&height[i]<rightmax ){
total=total+min(leftmax,rightmax)-height[i];
            }
        }
        return total;
    }
};