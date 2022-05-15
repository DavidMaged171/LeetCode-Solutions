class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        vector<vector<int>>moveLeftUP={{-1,0},{0,-1}};
        vector<vector<int>>moveDownRight={{1,0},{0,1}};
        vector<vector<int >>dp(rows,vector<int>(cols,INT_MAX-1000));
        
        for(int i=0;i<rows;i++)
        {
            for(int g=0;g<cols;g++)
            {
                if(mat[i][g]==0)dp[i][g]=0;
                else
                {
                    for(auto move:moveLeftUP)
                    {
                        int newX=i+move[0];
                        int newY=g+move[1];
                        if(isPointValid(rows,cols,newX,newY))
                        {
                            dp[i][g]=min(dp[i][g],dp[newX][newY]+1);
                        }
                    }
                }
                
            }
        }
        for(int i=rows-1;i>=0;i--)
        {
            for(int g=cols-1;g>=0;g--)
            {
                if(mat[i][g]==0)dp[i][g]=0;
                else
                {
                    for(auto move:moveDownRight)
                    {
                        int newX=i+move[0];
                        int newY=g+move[1];
                        if(isPointValid(rows,cols,newX,newY))
                        {
                            dp[i][g]=min(dp[i][g],dp[newX][newY]+1);
                        }
                    }
                }
                
            }
        }
        return dp;
    }
    bool isPointValid(int rows,int cols,int x,int y)
    {
        return (x<rows&&x>=0&&y<cols&&y>=0);
    }
};