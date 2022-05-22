class Solution {
public:
    int countSubstrings(string s) {
        int res=0;
        if(s.size()==1)return 1;
        for(int i=0;i<s.size();i++)
        {
            checkFromMid(s,i,i,res);
            checkFromMid(s,i,i+1,res);
            
        }
        //res+=s.size();
        return res;
    }
    int checkFromMid(string s,int left,int right,int& res)
    {
        if(left<0||right>=s.size())return false;
        while(left>=0 and right<s.size() )
        {
            if(s[left]==s[right])
                {left--;right++;res++;}
            else return false;
        }
        return true;
    }
};