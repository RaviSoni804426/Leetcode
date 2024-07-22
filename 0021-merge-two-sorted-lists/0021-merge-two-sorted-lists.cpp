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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;
       
        ListNode * c1 = list1, *c2 = list2, *head = NULL, *temp;
        while(c1 != NULL && c2 != NULL){
            if(c1->val < c2->val){
                if(!head){
                    head = new ListNode(c1 -> val);
                    temp = head;
                    c1 = c1->next;
                }else {
                    temp -> next = new ListNode(c1 -> val);
                    temp = temp -> next;
                    c1 = c1->next;
                }
            }else if(c1->val == c2->val){
                if(!head){
                    head = new ListNode(c1->val);
                    temp = head;
                    temp->next = new ListNode(c2->val);
                    temp = temp->next;
                    c1 = c1->next;
                    c2 = c2->next;
                }else{
                    temp -> next = new ListNode(c1->val);
                    temp = temp -> next;
                    temp->next = new ListNode(c2->val);
                    temp = temp->next;
                    c1 = c1->next;
                    c2 = c2->next;
            }}else{
                if(!head){
                    head = new ListNode(c2 -> val);
                    temp = head;
                    c2 = c2->next;
                }else{
                    temp -> next = new ListNode(c2 -> val);
                    temp = temp -> next;
                    c2 = c2->next;
                }
            }
        }
        while(c1 != NULL){
            temp ->next = c1;
            temp = temp->next;
            c1 = c1->next;
        }   
        while(c2 != NULL){
            temp ->next = c2;
            temp = temp->next;
            c2 = c2->next;
        }        

       return head;
    }

};