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
    void helper(vector<vector<int>>& ans , vector<int> path , TreeNode* root , int targetSum) {
        if(root == NULL) {
            return ;
        }

        path.push_back(root->val) ;
        targetSum -= root->val ;

        if(targetSum == 0 && root->left == NULL && root->right == NULL) {
            ans.push_back(path) ;
            return ;
        }

        if(root->left) {
            helper(ans , path , root->left , targetSum) ;
        }
        if(root->right) {
            helper(ans , path , root->right , targetSum) ;
        }
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans ;
        vector<int> path ;

        helper(ans , path , root , targetSum) ;

        return ans ;
    }
};