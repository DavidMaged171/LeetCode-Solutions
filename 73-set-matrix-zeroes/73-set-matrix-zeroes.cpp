class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        queue<vector<int>>savedZeros;
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        for(int i=0;i<rows;i++)
        {
            for(int g=0;g<cols;g++)
            {
                if(matrix[i][g]==0)
                {
                    //for COl push {i,0,-1};
                    //for ROW push {0,g,-2};
                    savedZeros.push({i,0,-1});
                    savedZeros.push({0,g,-2});
                }
            }
        }
        while(!savedZeros.empty())
        {
            auto curr=savedZeros.front();
            savedZeros.pop();
            setZeros(matrix,curr);
        }
        
    }
    void setZeros(vector<vector<int>>& matrix,vector<int>v)
    {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int x=v[0];
        int y=v[1];
        if(v[2]==-2)
        {
            for(int i=0;i<rows;i++)
                matrix[i][y]=0;
        }
        else if(v[2]=-1)
        {
            for(int i=0;i<cols;i++)
                matrix[x][i]=0;
        }
    }
};