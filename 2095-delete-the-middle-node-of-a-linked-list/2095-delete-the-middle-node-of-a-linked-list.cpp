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
    ListNode* deleteMiddle(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return NULL;                                //base case
        }                                                   

        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {                      //find the number of nodes
            cnt++;
            temp = temp->next;
        }

        temp = head;
        int pos = 0;
        while (pos < cnt / 2 - 1) {                 //place the temp pointer before the deleting one
            temp = temp->next;
            pos++;
        }

        ListNode* del = temp->next;
        temp->next = del->next;                 //store the desired pointer address and then create the connections
        delete del;

        return head;                            //return head
    }
};