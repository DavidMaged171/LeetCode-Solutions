class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int cols=grid[0].size();
        int sum=0;
        vector<vector<int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
        queue<vector<int>> q;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    sum++;
                    q.push({i,j});
                    grid[i][j]='2';
                }
                while(!q.empty())
                {
                    auto curr=q.front();
                    q.pop();
                    for(auto move:moves)
                    {
                        int newX=curr[0]+move[0];
                        int newY=curr[1]+move[1];
                        if(isCellValid (grid,newX,newY))
                        {
                            if(grid[newX][newY]=='1')
                            {
                                q.push({newX,newY});
                                grid[newX][newY]='2';
                            }
                        }
                    }
                }
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<cols;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        return sum;
    }
    bool isCellValid(vector<vector<char>>& grid,int x,int y)
    {
        if(x<0||x>=grid.size()||y<0||y>=grid[0].size())
            return false;
        return true;
    }
};
