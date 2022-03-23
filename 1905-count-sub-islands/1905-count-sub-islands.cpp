class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int rows=grid1.size(),cols=grid1[0].size();
        vector<vector<int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
        queue<vector<int>>q;
        int sum=0;
        for(int i=0;i<rows;i++)
        {
            bool isIsland;
            for(int g=0;g<cols;g++)
            {
                isIsland =(grid2[i][g]==1);
                if(isIsland)
                {
                    q.push({i,g});
                    grid2[i][g]=2;
                    if(grid1[i][g]==0)
                        isIsland=false;
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
                            if(grid2[newX][newY]==1)
                            {
                                q.push({newX,newY});
                                if(grid1[newX][newY]==0)
                                {
                                    isIsland=false;
                                }
                                grid2[newX][newY]=2;
                            }
                        }
                    }
                }
                if(isIsland)
                {
                    cout<<i<<" "<<g<<endl;
                    sum++;
                }
            }
            
        }
        return sum;
    }
    bool isCellValid(int x,int y,int rows,int cols)
    {
        if(x<0||y<0||x>=rows||y>=cols)
            return false;
        return true;
    }
};