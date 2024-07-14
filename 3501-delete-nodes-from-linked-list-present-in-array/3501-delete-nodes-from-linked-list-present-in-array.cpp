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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> s;
        for (auto i : nums) {
            s.insert(i);
        }
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while (curr != nullptr) {
            if (s.find(curr->val) != s.end()) {
                // If it is, we need to remove this node
                if (prev == nullptr) {
                    // If prev is null, we are at the head of the list
                    // Update the head to the next node
                    head = curr->next;
                } else {
                    
                    prev->next = curr->next;
                }
                
                curr = curr->next;
            } else {
                
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};