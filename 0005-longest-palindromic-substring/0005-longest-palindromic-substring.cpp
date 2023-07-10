class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<=1)return s;
        int start=0;
        int end=0;
         for(int i=0;i<s.size();i++)
        {
            int len1=expandFormMiddle(s,i,i);
            int len2=expandFormMiddle(s,i,i+1);
            int res=max(len1,len2);
            if(res>(end-start))
            {
                start=i-((res-1)/2);
                end=i+(res/2);
            }
        }
        return s.substr(start,(end+1)-start);
    }
    int expandFormMiddle(string s,int left,int right)
    {

        if(left>right)return 0;
        while(left>=0&&right<s.size() and s[left]==s[right])
        {
            left--;
            right++;
        }
        return right-left-1;
    }
};







