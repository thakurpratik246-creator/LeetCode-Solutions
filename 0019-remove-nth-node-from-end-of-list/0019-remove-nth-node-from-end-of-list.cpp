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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        
        if (n == cnt) {
            head = head->next;
            return head;
        }

        temp = head;
        int pos = 0;
        while (pos < cnt - n - 1) {
            temp = temp->next;
            pos++;
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};