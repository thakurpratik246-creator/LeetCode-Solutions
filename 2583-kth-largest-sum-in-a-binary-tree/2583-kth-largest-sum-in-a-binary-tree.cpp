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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q ;
        vector<long long> ans ;

        q.push(root) ;

        while(q.size() > 0) {
            int s = q.size() ;
            long long sum = 0 ;

            for(int i = 0 ; i < s ; i++) {
                TreeNode* curr = q.front() ;
                q.pop() ;

                sum += (long long)curr->val ;

                if(curr->left != NULL) {
                    q.push(curr->left) ;
                }
                if(curr->right != NULL) {
                    q.push(curr->right) ;
                }
            }

            ans.push_back(sum) ;
        }

        if (ans.size() < k) {
            return -1;
        }

        sort(ans.begin() , ans.end()) ;
        return ans[ans.size() - k] ;
    }
};