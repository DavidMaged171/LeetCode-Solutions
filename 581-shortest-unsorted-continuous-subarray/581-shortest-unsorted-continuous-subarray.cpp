class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        vector<int>sortedNums=nums;
        sort(sortedNums.begin(),sortedNums.end());
        
       if(sortedNums==nums)return 0;
        while(sortedNums[left]==nums[left] or sortedNums[right]==nums[right])
        {
            if(sortedNums[left]==nums[left])left++;
            if(sortedNums[right]==nums[right])right--;
        }
        
        return right-left+1;
    }
};