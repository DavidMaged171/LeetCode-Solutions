class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyTime=INT_MAX,profit,res=0;
        for(int i=0;i<prices.size();i++)
        {
            if(buyTime>prices[i])
                buyTime=prices[i];
            profit=prices[i]-buyTime;
            if(res<profit)
                res=profit;
        }
        return res;
    }
};
//************************************* Complexity ****************************************
/*
Time: O(N)
Space: O(0)
*/


