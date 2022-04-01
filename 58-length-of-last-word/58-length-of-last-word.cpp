class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum = 0;
        bool flag =false;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' '&&!flag){sum++;flag=true;}
            else if(s[i]!=' '&&flag)sum++;
            else if(s[i]==' '&&flag)
                break;
            
        }
        return sum;
    }
};