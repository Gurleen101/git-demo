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
void solve(TreeNode*root, string &S,vector<string> &temp){
    if(root==NULL) return;
   S += to_string(root->val);
   if(root->left==NULL && root->right==NULL) temp.push_back(S);
   solve(root->left,S,temp);
   solve(root->right,S,temp);
   S.pop_back();

    
}
    int sumNumbers(TreeNode* root) {
        vector<string> temp;
        string S;
        solve(root,S,temp);
        int ans=0;

        for(string s: temp){
           ans+=stoi(s);
        }
        return ans;
    }
};