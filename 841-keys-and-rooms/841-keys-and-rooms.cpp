class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        map<int,bool>visited;
        visited[0]=true;
        int visitedRooms=1;
        stack<int>stk;
        stk.push(0);
        while(!stk.empty())
        {
            vector<int>keys=rooms[stk.top()];
            stk.pop();
            for(auto key:keys)
            {
                if(!visited[key])
                {
                    visited[key]=true;
                    stk.push(key);
                    visitedRooms++;
                }
            }
        }
        return (visitedRooms==rooms.size());
    }
};