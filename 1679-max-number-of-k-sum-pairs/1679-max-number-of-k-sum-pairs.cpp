class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map <int,int>freq;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(freq[k-nums[i]]>=1)
            {
                count++;
                freq[k-nums[i]]--;
            }
            else
                freq[nums[i]]++;
        }
        
        return count;
    }
};