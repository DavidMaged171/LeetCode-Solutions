class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int reminder[60] = {};
        int count =0;
        for(auto t:time)
        {
            if(t%60==0)
                count+=reminder[0];
            else 
                count+=reminder[60- t%60];
            reminder[t%60]++;
        }
        return count;
    }
};