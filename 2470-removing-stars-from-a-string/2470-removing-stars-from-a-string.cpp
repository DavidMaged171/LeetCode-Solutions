class Solution {
public:
    string removeStars(string s) {
        stack<char> st ;
        for(auto c : s)
        {
            if(c=='*'&&!st.empty())
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end()); 
        return  res;
    }
};