class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1&&source==destination)return true;
        map<int,vector<int>>mp;
        map<int,bool>visitedNode;
        int rows = edges.size();
        for(int i=0;i<rows;i++)
        {
            auto curr= edges[i];
            mp[curr[0]].push_back(curr[1]);
            mp[curr[1]].push_back(curr[0]);
        }
        
        stack<int>s;
        s.push(source);
        while(!s.empty())
        {
            auto value=mp[s.top()];
            visitedNode[s.top()]=true;
            s.pop();
            for(int i=0;i<value.size();i++)
            {
                if(!visitedNode[value[i]])s.push(value[i]);
                if(value[i]==destination)return true;
                
            }
            
        }
        return false;
    }
};