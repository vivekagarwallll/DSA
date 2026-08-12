class Solution {
public:
long long rec(string s,long long no,int i,int limit){
    if(i==s.length() || s[i] < '0' || s[i] > '9' ){
        if(limit==8){return no*-1;}
        else{return no;
        }}
    int v = s[i]-'0';
    if(no == INT_MAX/10 && v<=limit ||( no < INT_MAX/10 )){
    no=no*10+v;
    return rec(s,no,i+1,limit);
}
else{
    if(limit==8){return INT_MIN;}
    
    else{return INT_MAX;}
}

}


    int myAtoi(string s) {
int i=0;
int sign=1;
int limit=7;
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(i<s.length()&& s[i]=='-'){sign=sign*-1;i++;limit=8;}
        else if (i<s.length() && s[i]=='+'){sign=sign*1;i++;}
        int x= rec(s,0,i,limit);
        return x;
    }
};