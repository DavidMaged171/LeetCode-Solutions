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
    map<int,int>mp;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL)
        {
            return false;
        }
        mp[root->val]++;
        if(mp[k-(root->val)]>0&&root->val!=k-(root->val))
            return true;
        else if(root->val==k-(root->val)&&(mp[k-(root->val)]>1))
                return true;
        
        return findTarget(root->left,k)||findTarget(root->right,k);
    }
};