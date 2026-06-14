class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;
        for(int i=0;i<n-1;i++){
            
            if(nums[i+1] == nums[i] + 1){
                count++;
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                count=1;
            }
                    if(count>maxcount){
                    maxcount=count;
            }
        }
        return maxcount;
    }
};