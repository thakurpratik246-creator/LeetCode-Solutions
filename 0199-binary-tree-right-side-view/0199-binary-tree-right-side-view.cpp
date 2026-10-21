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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans ;
        if(root == NULL) return ans ;

        queue<pair<TreeNode* , int>> q ;
        q.push({root , 0}) ;
        set<int> set ;

        while(q.size() > 0) {
            int s = q.size() ;
            for(int i = 0 ; i < s ; i++) {
                TreeNode* curr = q.front().first ;
                int currLevel = q.front().second ;
                q.pop() ;

                if(set.find(currLevel) == set.end()) {
                    ans.push_back(curr->val) ;
                    set.insert(currLevel) ;
                }

                if(curr->right != NULL) {
                    q.push({curr->right , currLevel+1}) ;
                }
                if(curr->left != NULL) {
                    q.push({curr->left , currLevel+1}) ;
                }
            }
        }
        return ans ;
    }
};