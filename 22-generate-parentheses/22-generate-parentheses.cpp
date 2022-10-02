class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
        solve("",n,0,0);
        return res;
        
    }
    void solve(string s,int n,int closed,int opened)
    {
        if(closed==n&&opened==n)
        {
            
            res.push_back(s);
            return ;
        }
        else
        {
            if(opened<n)
            {
                solve(s+"(",n,closed,opened+1);
            }
            if(closed<opened)
            {
                solve(s+")",n,closed+1,opened);
            }
        }
    }
    
};