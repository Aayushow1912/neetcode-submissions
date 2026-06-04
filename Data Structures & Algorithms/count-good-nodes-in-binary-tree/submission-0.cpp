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
    
    void trav(TreeNode* root, int maxi, int &goodnode){
       if(root == NULL) return;

       if(root->val >= maxi){
        goodnode++;
        maxi = max(maxi, root->val);
       }

       trav(root->left,maxi,goodnode);
       trav(root->right,maxi,goodnode);

    }
    int goodNodes(TreeNode* root) {
       int maxi = INT_MIN;
       int goodnode = 0;

       trav(root,maxi,goodnode);

       return goodnode;
    }
};
