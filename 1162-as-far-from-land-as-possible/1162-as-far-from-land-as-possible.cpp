class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<vector<int>> q;
        int rows=grid.size(),cols=grid[0].size();
        vector<vector<int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
        int maxSum=0;
        for(int i=0;i<rows;i++)
        {
            for(int g=0;g<cols;g++)
            {
                if(grid[i][g]==1)
                    q.push({i,g});
            }
        }
        while(!q.empty())
        {
            auto curr=q.front();
            q.pop();
            for(auto move:moves)
            {
                int newX=move[0]+curr[0];
                int newY=move[1]+curr[1];
                if(isCellValid (newX,newY,rows,cols))
                {
                    if(grid[newX][newY]==0)
                    {
                        grid[newX][newY]=grid[curr[0]][curr[1]]+1;
                        maxSum=max(grid[newX][newY],maxSum);
                        q.push({newX,newY});
                    }
                }
            }
        }
        
        return (maxSum>0?maxSum -1 :-1);
    }
    bool isCellValid(int x,int y,int rows,int cols)
    {
        if(x<0||y<0||x>=rows||y>=cols)
            return false;
        return true;
    }
};