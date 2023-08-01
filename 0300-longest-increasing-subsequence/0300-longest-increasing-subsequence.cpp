class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        dp[0]=1;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int g=i;g>=0;g--)
            {
                if(nums[i]>nums[g])
                {
                    dp[i]=max(dp[g]+1,dp[i]);
                }
                res=max(res,dp[i]);
            }
        }
        return res;
    }
};