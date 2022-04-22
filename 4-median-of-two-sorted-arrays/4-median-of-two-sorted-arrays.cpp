class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        // merge the 2 sorted arrays
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        
        //Sort the merged array
        sort(nums1.begin(),nums1.end());
        if((m+n)%2==1)
            return nums1[(m+n)/2];
        else 
            {
            double res=nums1[(m+n)/2]+nums1[(m+n)/2-1];
            return res/2;
        }
    }
};