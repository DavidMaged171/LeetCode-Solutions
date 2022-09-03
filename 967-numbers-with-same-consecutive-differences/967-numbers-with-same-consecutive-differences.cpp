class Solution {
public:
    vector<int>res;
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++)
        {
            solution(n-1,k,i,i);
        }
        return res;
    }
    void solution(int n,int k,int x,int num)
    {
        if(n==0)
        {
            //cout<<num<<endl;
            res.push_back(num);
            return;
        }
        
        if(x+k<10)
        {
            solution(n-1,k,x+k,num*10+(x+k));
        }
        if(k==0)
        {
            return;
        }
        if((x-k)>=0)
        {
            solution(n-1,k,(x-k),num*10+abs(x-k));
        }
    }
    
};