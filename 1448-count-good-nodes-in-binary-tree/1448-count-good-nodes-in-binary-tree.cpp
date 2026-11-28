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

    void solve(TreeNode* root, int &count, int maxVal) {

        if(root == NULL) return;

        if(root->val >= maxVal)
            count++;

        maxVal = max(maxVal, root->val);

        solve(root->left, count, maxVal);
        solve(root->right, count, maxVal);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;

        solve(root, count, INT_MIN);

        return count;
    }
};