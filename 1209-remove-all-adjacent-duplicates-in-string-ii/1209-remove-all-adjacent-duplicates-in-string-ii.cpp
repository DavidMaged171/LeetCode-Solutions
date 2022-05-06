class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>stk;
        for(int i=0;i<s.length();i++)
        {
            if(stk.empty()||stk.top().first!=s[i])
                stk.push({s[i],1});
            else 
            {
                auto curr=stk.top();
                stk.pop();
                stk.push({s[i],curr.second+1});
            }
            if(stk.top().second==k)
                stk.pop();
        }
        string ans="";
        while(!stk.empty())
        {
            auto curr=stk.top();
            stk.pop();
            while(curr.second--)
            {
                ans+=curr.first;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};