class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int g=i;g<matrix[0].size();g++)
            {
                swap(matrix[i][g],matrix[g][i]);
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};