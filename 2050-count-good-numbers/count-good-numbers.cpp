class Solution {
public:

long long power(long long base , long long p){
    const long long MOD = 1000000007;
    if(p==0){return 1;}
    else if(base==1 ){return 1;}  
    long long ans=1;
    while(p>0){
    if(p%2==0){
        p=p/2;
        base=(base*base)%MOD;

    }
    else if(p%2!=0){
        ans=(ans*base)%MOD;
        p=p-1;
    }}
return ans;
}
    int countGoodNumbers(long long n) {
        long long even=1;
        long long odd=1;
        if(n%2==0){
            even=n/2;
            odd=n/2;
        }
        else{
            even=(n/2)+1;
            odd=n/2;
        }
        even=power(5,even);
        odd=power(4,odd);
        return (odd*even)% 1000000007;
    }
};