class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        map<int,pair<int,int>>mp;
        mp[nums[0]].first=0;
        for(int i=1;i<nums.size();i++)
        {
            if(mp[nums[i]].first==0)mp[nums[i]].first=i;
            else mp[nums[i]].second=i;
        }
        sort(nums.begin(), nums.end());
        int start=0,end=nums.size()-1;
        while(start<end)
        {
            if(nums[start]+nums[end]==target)
            {
                cout<<nums[start]<<" "<<nums[end];
                if(nums[start]==nums[end])
                {
                    res.push_back(mp[nums[start]].first);
                    res.push_back(mp[nums[end]].second);
                    break;
                }
                else
                {
                    res.push_back(mp[nums[start]].first);
                    res.push_back(mp[nums[end]].first);
                    break;
                }
            }
            else if(nums[start]+nums[end]>target)
                end--;
            else start++;
        }
        
        return  res;
    }
};