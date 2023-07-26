class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1&&source==destination)return true;
        map<int,vector<int>>mp;
        map<int,bool>visitedNodes;
        for(auto v:edges)
        {
            mp[v[0]].push_back(v[1]);
            mp[v[1]].push_back(v[0]);
        }
        stack<int>st;
        st.push(source);
        while(!st.empty())
        {
            visitedNodes[st.top()]=true;
            auto v=mp[st.top()];
            st.pop();
            for(auto val:v)
            {
                if(val==destination)return true;
                else{
                    if(!visitedNodes[val])st.push(val);
                }
            }
        }
        return false;
    }
};