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
   
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        longest_route(root, ans);
        return ans;
    }
     int longest_route(TreeNode* root, int& ans){
        if(root == NULL) return 0;

        int ls = max(0,longest_route(root->left, ans));
        int rs = max(0,longest_route(root->right, ans));
        ans = max(ans, root->val + ls + rs);

        return root->val + max(ls,rs);
    }
};
