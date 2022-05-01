class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        else if(n==2)return max(nums[0],nums[1]);
        int res1=calcMax(0,n-2,nums);
        int res2=calcMax(1,n-1,nums);
        return max(res1,res2);
    }
    int calcMax(int start,int end,vector<int>& nums)
    {
        int n=nums.size();
        int dp[n];
        dp[start]=nums[start];
        dp[start+1]=max(nums[start],nums[start+1]);
        for(int i=start+2;i<=end;i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[end];
    }
};