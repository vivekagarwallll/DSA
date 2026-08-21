class Solution {
public:

void funn(vector<string>&v,string s,int n,int open , int close ){
    if(open==n && close == n){
        v.push_back(s);
        return;}
        if(open<n){
            s.push_back('(');
            funn(v,s,n,open+1,close);
            s.pop_back();
        }
         if(close<n && close<open ){
            s.push_back(')');
            funn(v,s,n,open,close+1);
            s.pop_back();
        }
}
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;

        funn(v,s,n,0,0);
return v;
    }
};