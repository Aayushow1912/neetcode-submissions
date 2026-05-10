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
    int height(TreeNode* root){
      if(!root) return 0;
      int lefth = height(root->left);
      int righth = height(root->right);

      int ht = max(lefth,righth) + 1;

      return ht;
    }

    // O(N*2)
    // bool isBalanced(TreeNode* root) {
    //   if(!root) return true;
    //   int lefth = height(root->left);
    //   int righth = height(root->right);

    //   if(abs(lefth - righth) > 1) return false;

    //   return isBalanced(root->left) && isBalanced(root->right);
    // }

    // O(N)
    bool isBalanced(TreeNode* root) {
      return dfsht(root) != -1;
    }
    int dfsht(TreeNode* root){
      if(root == NULL) return 0;
      int lh = dfsht(root->left);
      if(lh == -1) return -1;
      int rh = dfsht(root->right);
      if(rh == -1) return -1;

      if(abs(lh - rh) > 1) return -1;
      return 1 + max(lh,rh);
    }
};
