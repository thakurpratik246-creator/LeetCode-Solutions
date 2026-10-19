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
    int allPaths(TreeNode* root , int path) {
        if(root == NULL) {
            return 0 ;
        }

        path = 10 * path + root->val ;

        if(root->left == NULL && root->right == NULL) {
            return path ;
        }

        return allPaths(root->left , path) + allPaths(root->right , path) ;
    }

    int sumNumbers(TreeNode* root) {
        return allPaths(root , 0) ;   
    }
};