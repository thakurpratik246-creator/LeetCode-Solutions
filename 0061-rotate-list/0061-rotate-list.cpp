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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) {
            return head ;
        }

        int cnt = 1 ;
        ListNode* temp = head ;
        while(temp->next != NULL) {
            temp = temp->next ;
            cnt++ ;
        }

        ListNode* tail = temp ;
        
        if(cnt < k) {
            k = k % cnt ;
        }
        if(cnt == k || k == 0) {
            return head ;
        }

        temp = head ;
        int pos = 0 ;  
        while(pos < cnt - k - 1) {
            temp = temp->next ;
            pos++ ;
        }

        ListNode* curr = temp->next ;
        tail->next = head ;
        temp->next = NULL ;
        return curr ;
    }
};