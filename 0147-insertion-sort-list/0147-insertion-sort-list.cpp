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
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prevSorted = head;      
        ListNode* curr = head->next;      

        while (curr) {
            if (curr->val >= prevSorted->val) {
                prevSorted = curr;
                curr = curr->next;
            } else {
                prevSorted->next = curr->next;
                ListNode* prev = dummy;
                while (prev->next && prev->next->val < curr->val) {
                    prev = prev->next;
                }
                curr->next = prev->next;
                prev->next = curr;
                curr = prevSorted->next;
            }
        }

        return dummy->next;
    }
};
