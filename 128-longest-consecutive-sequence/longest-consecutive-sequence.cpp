class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>stt;
        if(n<1){
            return 0;
        }
        for(int i=0;i<n;i++){
            stt.insert(nums[i]);
        }
int maxcount=1;
        for(auto it : stt ){
            if(stt.find(it-1)!=stt.end()){
                continue;
            }
            else{
int count=1;
int curr=it;
while(stt.find(curr+1)!=stt.end()){
    count++;
    curr++;
}           
if(count>maxcount){
                    maxcount=count;
                }
            }
            }

        return maxcount;

    }
};