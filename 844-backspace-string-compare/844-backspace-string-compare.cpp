class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss=stringWithOutBackspace(s);
        string tt=stringWithOutBackspace(t);
        return (ss==tt);
    }
    string stringWithOutBackspace(string s)
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
                st.push(s[i]);
            else if(!st.empty())
                st.pop();
        }
        string t="";
        while(!st.empty()){t+=st.top();st.pop();}
        return t;
    }
};