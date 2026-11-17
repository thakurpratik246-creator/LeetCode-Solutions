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
    void makeString(string& s , TreeNode* root) {
        if(root == NULL) {
            return ;
        }
        s += to_string(root->val) ;
        if(root->left == NULL && root->right == NULL) {             //root
            return ;
        }

        s += "(" ;
        if(root->left) {
           makeString(s , root->left) ;
        }
        s += ")" ;


        if(root->right) {
            s += "(" ;
            makeString(s , root->right) ;
            s += ")" ; 
        }
        return ;
    }

    string tree2str(TreeNode* root) {
        string s = "" ;
        makeString(s , root) ;
        return s ;
    }
};