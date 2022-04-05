class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>mp;
        map<char,int>::iterator ptr;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0;i<t.size();i++)
            mp[t[i]]++;
        for (ptr = mp.begin(); ptr != mp.end(); ptr++)
            if(ptr->second %2==1)
                return ptr->first;
        return 0;
    }
    
};