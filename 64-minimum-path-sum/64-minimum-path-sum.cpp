class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=1;i<cols;i++)
        {
            grid[0][i]+=grid[0][i-1];
        }
        for(int i=1;i<rows;i++)
        {
            grid[i][0]+=grid[i-1][0];
        }
        for(int i=1;i<rows;i++)
        {
            for(int g=1;g<cols;g++)
            {
                grid[i][g]+=min(grid[i-1][g],grid[i][g-1]);
            }
        }
        return grid[rows-1][cols-1];
    }
    
};