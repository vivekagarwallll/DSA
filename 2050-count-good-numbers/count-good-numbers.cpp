class Solution {
public:
long long fun(long long base,long long poww ){
    const long long MOD=1000000007;
    if(poww==0){
return 1;}

if(poww%2==0){
   return fun(base*base%MOD,poww/2);
}
else{
    return base * fun(base,poww-1)%MOD;
}    
    
    }



    int countGoodNumbers(long long n) {
        const long long MOD=1000000007;
        long long even=1;
        long long odd = 1;
        if(n%2==0){even=n/2;odd=n/2;}
        else{even=(n/2)+1;odd=n/2;}
        even=fun(5,even);
        odd=fun(4,odd);
        return (even*odd)%MOD;
    }
};