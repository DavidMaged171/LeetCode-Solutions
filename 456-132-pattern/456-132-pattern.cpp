class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int currMin=nums[0];
        stack<pair<int,int>>stk;
        for(int i=1;i<nums.size();i++)
        {
            while(!stk.empty()&&nums[i]>=stk.top().first){stk.pop();}
            if(!stk.empty()&&nums[i]>stk.top().second)return true;
            stk.push({nums[i],currMin});
            currMin=min(currMin,nums[i]);
        }
        return false;
    }
};