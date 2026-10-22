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
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL) {
            return -1 ;
        }

        queue<TreeNode*> q ;
        q.push(root) ;
        vector<int> ans ;

        while(q.size() > 0) {
            int s = q.size() ;
            for(int i = 0 ; i < s ; i++) {
                TreeNode* curr = q.front() ;
                q.pop() ;

                if(curr->left != NULL) {
                    q.push(curr->left) ;
                }
                if(curr->right != NULL) {
                    q.push(curr->right) ;
                }

                ans.push_back(curr->val) ;
            }
        }
        sort(ans.begin() , ans.end()) ;

        if(k > ans.size()) {
            return -1 ;
        }

        return ans[k-1] ;
    }
};