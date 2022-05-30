class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        res.push_back ({1});
        if(numRows==1)return res;
        res.push_back ({1,1});
        if(numRows==2)return res;
        res.push_back({1,2,1});
        if(numRows==3)return res;
        for(int i=3;i<numRows;i++)
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
        return res;
    }
};