class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int rows=grid.size(),cols=grid[0].size();
        int sum=0;
        vector<vector<int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
        queue<vector<int>>q;
        
        for(int i=0;i<rows;i++)
        {
            for(int g=0;g<cols;g++)
            {
                bool isClosed=(grid[i][g]==0);
                if(grid[i][g]==0)
                {
                    q.push({i,g});
                    if(isCellOnBorder(i,g,rows,cols))
                        isClosed=false;
                }
                grid[i][g]=2;
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
                                q.push({newX,newY});
                                if(isCellOnBorder(newX,newY,rows,cols))
                                    isClosed=false;
                            }
                            grid[newX][newY]=2;
                        }
                    }
                }
                if(isClosed)
                    sum++;
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
    bool isCellOnBorder(int x,int y,int rows,int cols)
    {
        if(x==0||y==0||x==rows-1||y==cols-1)
            return true;
        //cout<<x<<" "<<y<<" "<<rows<<" "<<cols<<endl;
        return false;
    }
};