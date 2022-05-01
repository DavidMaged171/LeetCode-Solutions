class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int numOfJumps=0,currMaxJump=0,intervalMaxJump=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            intervalMaxJump=max(intervalMaxJump,nums[i]+i);
            if(i==currMaxJump)
            {
                currMaxJump=intervalMaxJump;
                numOfJumps++;
            }                                                 
        }
        return numOfJumps;
    }
};