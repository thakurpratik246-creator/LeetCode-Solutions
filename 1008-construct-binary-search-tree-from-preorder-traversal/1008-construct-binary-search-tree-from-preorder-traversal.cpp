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
    TreeNode* buildBST(vector<int>& preorder , int bound , int& idx) {
        if(idx >= preorder.size() || preorder[idx] > bound) {
            return NULL ;
        }

        TreeNode* root = new TreeNode(preorder[idx++]) ;
        root->left = buildBST(preorder , root->val , idx) ;
        root->right = buildBST(preorder , bound , idx) ;
        return root ;

        return root ;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0 ;
        return buildBST(preorder , INT_MAX , idx) ;
    }
};