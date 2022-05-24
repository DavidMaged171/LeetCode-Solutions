class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int size=arr.size();
        map<int,bool>visited;
        stack<int>stk;
        stk.push(start);
        visited[start]=true;
        while(!stk.empty())
        {
            int curr=stk.top();
            if(arr[curr]==0)return true;
            int dest=arr[curr]+curr;
            stk.pop();
            if(isPointValid(size,dest)&&!visited[dest])
            {
                visited[dest]=true;
                stk.push(dest);
            }
            dest=curr-arr[curr];
            if(isPointValid(size,dest)&&!visited[dest])
            {
                visited[dest]=true;
                stk.push(dest);
            }  
        }
        return false;
    }
    bool isPointValid(int size, int point)
    {
        return (point>=0&&point<size);
    }
};