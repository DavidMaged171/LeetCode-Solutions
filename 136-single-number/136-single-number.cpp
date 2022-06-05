class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
            if(nums[i]!=nums[i-1])return nums[i-1];
            else i++;
        return nums[n-1];
    }
};

/*
Time Complexity: O(LogN)
Space Complexity: Constant
*/