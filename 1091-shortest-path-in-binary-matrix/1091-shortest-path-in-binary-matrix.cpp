class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)return -1;
        int n=grid.size();
        vector<vector<int>>moves={{-1,-1},{0,-1},{1,-1},
                    {-1,0},{1,0},{-1,1},{0,1},{1,1}};
        queue<vector<int>>q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty())
        {
            auto curr=q.front();
            q.pop();
            if(curr[0]==n-1&&curr[1]==n-1)return grid[n-1][n-1];
            for(auto move:moves)
            {
                int newX=curr[0]+move[0];
                int newY=curr[1]+move[1];
                if(checkPoint(n,newX,newY))
                {
                    if(grid[newX][newY]==0)
                    {
                        q.push({newX,newY});
                        grid[newX][newY]=grid[curr[0]][curr[1]]+1;
                    }
                }
            }
        }
        return -1;
    }
    bool checkPoint(int n,int x,int y)
        {return(x<n&&y<n&&x>=0&&y>=0);}
};