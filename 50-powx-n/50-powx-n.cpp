class Solution {
public:
    double myPow(double x, int n) {
        if(x==1)return x;
        
        double ans=1;
        long long nn=n;
        if(nn<0)nn*=-1;
        while(nn)
        {
           if(nn%2==0)
           {
               x*=x;
               nn/=2;
           }
            else 
            {
                ans*=x;
                nn--;
            }
            
        }
        if(n<0)ans=1/ans;
        return ans;
    }
    
};