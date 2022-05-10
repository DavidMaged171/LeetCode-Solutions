class Solution
{
public:
    void combinationSum3Util(int k, int n, int start, vector<vector<int>> &ans, vector<int> &values)
    {
        // Base Cases
        if (k < 0 || n < 0)
        {
            return;
        }
        if ((k == 0) && (n == 0))
        {
            ans.push_back(values);
            
            return;
        }

        for (int i = start; i <= 9; i++)
        {
            values.push_back(i);
            
            combinationSum3Util(k - 1, n - i, i + 1, ans, values);
            
            values.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> ans;
        vector<int> values;
        combinationSum3Util(k, n, 1, ans, values);
        return ans;
    }
};