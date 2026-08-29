class Solution {
public:

void funn(vector<string>&ans,string &curr,unordered_map<char,string>&mpp,int start,string &digits){
if(start>=digits.length()){
ans.push_back(curr);
return ;
}
char ch= digits[start];
string str=mpp[ch];
for(int i=0;i<str.length();i++){
curr.push_back(str[i]);
funn(ans,curr,mpp,start+1,digits);
curr.pop_back();
}
}
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string curr="";
        int start=0;
        unordered_map<char,string>mpp;
mpp['2']="abc";
mpp['3']="def";
mpp['4']="ghi";
mpp['5']="jkl";
mpp['6']="mno";
mpp['7']="pqrs";
mpp['8']="tuv";
mpp['9']="wxyz";
funn(ans,curr,mpp,start,digits);
return ans;
    }
};