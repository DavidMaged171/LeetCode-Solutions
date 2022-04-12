class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            for(int g=i+1;g<nums.size();g++)
                if(nums[i]+nums[g]==target)
                {
                    res.push_back(i);
                    res.push_back(g);
                    return res;
                }
        }
        return  res;
    }
};