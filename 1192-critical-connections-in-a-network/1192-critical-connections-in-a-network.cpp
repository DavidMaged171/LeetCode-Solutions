class Solution {
    unordered_map<int,vector<int> > gr;
    vector<int> disc,low;
    vector<vector<int> > ans;
    vector<int> vis;
public:
    void dfs(int u,int p=-1){
        static int time=0;
        disc[u]=low[u]=++time;
        vis[u]=1;
        for(auto v:gr[u]){
            if(v==p) continue;
            if(!vis[v]){
                dfs(v,u);
                low[u]=min(low[u],low[v]);
                if(low[v]>disc[u]){
                    ans.push_back({v,u});
                }
            }
            else{
                low[u]=min(low[u],disc[v]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        for(auto c:connections){
            gr[c[0]].push_back(c[1]);
            gr[c[1]].push_back(c[0]);
        }
        disc.resize(n+1);
        low.resize(n+1);
        vis.resize(n+1,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        return ans;
    }
};