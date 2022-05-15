class Solution {
    int maxDepth = -1, res;
    void dfs(TreeNode* root, int depth = 0) {
        if (!root->left && !root->right) {
            if (depth == maxDepth) res += root->val;
            else if (depth > maxDepth) maxDepth = depth, res = root->val;
        }
        else {
            depth++;
            if (root->left) dfs(root->left, depth);
            if (root->right) dfs(root->right, depth);
        }
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        dfs(root);
        return res;
    }
};