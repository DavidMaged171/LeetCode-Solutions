class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        int rows=graph.size();
        int target=rows-1;
        for(int i=0;i<graph[0].size();i++)
        {
            vector<int>path;
            path.push_back(0);
            dfs(graph,graph[0][i],path,res);
        }
        return res;
    }
    void dfs(vector<vector<int>>& graph,int node,vector<int>&path,vector<vector<int>>&res)
    {
        path.push_back(node);
        if(node==graph.size()-1)
        {
            res.push_back(path);
        }else{
            for(int i=0;i<graph[node].size();i++)
            {
                dfs(graph,graph [node][i],path,res);
            }
        }
        path.pop_back();
    }
};