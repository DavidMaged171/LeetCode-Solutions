class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool>mp1;
        map<int, bool>mp2;
        for(auto num:nums1)mp1[num]=true;
        for(auto num:nums2)mp2[num]=true;
        vector<vector<int>> ans;
        set<int>nums1Res;
        for(auto num:nums1)
        {
            if(!mp2[num])nums1Res.insert(num);
        }
        ans.push_back(convertSetToVector(nums1Res));
        set<int>nums2Res;
        for(auto num:nums2)
        {
            if(!mp1[num])nums2Res.insert(num);
        }
        ans.push_back(convertSetToVector(nums2Res));
        return  ans;
    }
    private:
    vector<int> convertSetToVector(set<int>s){
        vector<int> v;
        for(auto num:s)
        {
            v.push_back(num);
        }
        return v;
    }
};