class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N==0 || x==1){return 1;}
        if(N<0){x=(1/x);N=N*-1;}
        double ans=1;
        while(N){
            if(N%2==0){
                x=x*x;
                N=N/2;
            }
            else if(N%2!=0){
                ans=ans*x;
                N=N-1;
            }
        }
        return ans;
    }
};