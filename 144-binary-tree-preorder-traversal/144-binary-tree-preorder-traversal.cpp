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
    vector<int>ans;
    vector<int> preorderTraversal(TreeNode* root) {
        fillAns(root);
        return ans;
    }
    void fillAns(TreeNode* root)
    {
        if(!root)
            return;
        else
        {
            ans.push_back(root->val);
            fillAns(root->left);
            fillAns(root->right);
        }
    }
};