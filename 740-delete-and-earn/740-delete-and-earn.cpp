class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>points;
        int maxNumber=0;
        for(auto num:nums)
        {
            points[num]+=num;
            maxNumber=max(maxNumber,num);
        }
        int dp[maxNumber+1];
        dp[0]=0;dp[1]=points[1];
        for(int i=2;i<=maxNumber;i++)
        {
            dp[i]=max(dp[i-1],points[i]+dp[i-2]);
        }
        
        return dp[maxNumber];
    }
};