class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> cost(n+1, INT_MAX);
        cost[0] = 0;
        
        queue<int> q;
        q.push(k);
        
        cost[k] = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0; i<sz; i++)
            {
                int front = q.front();
                q.pop();
                
				
                for(int j=0; j<times.size(); j++)
                {
					
                    if(front == times[j][0])
                    {
						
                        int totalCost = cost[front] + times[j][2];
						
                        if(cost[times[j][1]] > totalCost)
                        {
                            cost[times[j][1]] = totalCost;
                            q.push(times[j][1]);
                        }
                        
                    }
                }
            }
        }
        
        int mx = *max_element(cost.begin(), cost.end());
        
        return mx == INT_MAX ? -1 : mx;
    }
};