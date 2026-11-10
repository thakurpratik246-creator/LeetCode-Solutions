/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* BSTfromSortedArray(vector<int>& ans , int st , int end) {
        if(st > end) {
            return NULL ;
        }
        int mid  = st + (end - st) / 2 ;
        TreeNode* root = new TreeNode(ans[mid]) ;
        root->left = BSTfromSortedArray(ans , st , mid - 1) ;
        root->right = BSTfromSortedArray(ans , mid + 1 , end) ;
        return root ;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> ans ;
        ListNode* curr = head ;
        while(curr != NULL) {
            ans.push_back(curr->val) ;
            curr = curr->next ;
        }

        return BSTfromSortedArray(ans , 0 , ans.size() - 1) ;
    }
};