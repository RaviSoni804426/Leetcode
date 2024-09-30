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
        // Create a dummy node to simplify edge cases
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        // Move fast pointer n+1 steps ahead to account for the dummy node
        for (int i = 1; i <= n + 1; i++) {
            fast = fast->next;
        }

        // Move both pointers until fast reaches the end
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }

        // Now slow points to the node before the node to be removed
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;

        delete toDelete;  // Free memory of the deleted node

        // Get the new head
        ListNode* newHead = dummy->next;
        delete dummy;  // Clean up dummy node

        return newHead;
    }
};
