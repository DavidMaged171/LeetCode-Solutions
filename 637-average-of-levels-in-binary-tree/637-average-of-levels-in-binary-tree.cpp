/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double>res;
    
    vector<double> averageOfLevels(TreeNode* root) {
        queue <TreeNode*>tree;
        tree.push(root);
        
        while(!tree.empty())
        {
            double sum=0;
            double treeLen=tree.size();
            
            for(int i=0;i<treeLen;i++)
            {
                auto curr=tree.front();
                tree.pop();
                sum+=curr->val;
                if(curr->left)tree.push(curr->left);
                if(curr->right)tree.push(curr->right);
            }
            res.push_back(sum/treeLen);
        }
        return res;
    }
};

// ==================== Complexity =============================
// time: O(N)
// Space: O(N)
// =============================================================











