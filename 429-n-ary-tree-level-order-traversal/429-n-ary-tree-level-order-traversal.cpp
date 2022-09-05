/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(!root)return{};
        vector<vector<int>>res;
        solve(res,0,root);
        return res;        
    }
    void solve(vector<vector<int>>& res,int level,Node* node)
    {
        if(level==size(res))
        {
            res.push_back({node->val});
        }
        else
        {
            res[level].push_back(node->val);
        }
        for (Node* child : node->children) {
            solve(res, level + 1, child);
        }
    }
};