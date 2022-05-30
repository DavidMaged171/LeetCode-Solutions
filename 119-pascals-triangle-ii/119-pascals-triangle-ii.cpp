class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res;
        res.push_back ({1});
        res.push_back ({1,1});
        res.push_back({1,2,1});
        for(int i=3;i<=33;i++)
        {
            auto prev=res[i-1];
            vector<int>curr;
            curr.push_back(1);
            for(int g=1;g<prev.size();g++)
            {
                curr.push_back(prev[g]+prev[g-1]);
            }
            curr.push_back(1);
            res.push_back(curr);
        }
        return res[rowIndex];
    }
};