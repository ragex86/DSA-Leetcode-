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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL&&fast->next!=NULL){
            slow= slow->next;
            fast = fast->next->next;
        }
       ListNode* previous = NULL;
       ListNode* next = NULL;

       while(slow!=NULL){
        next = slow->next;
        slow->next= previous;
        previous = slow;
        slow= next;
       }
       ListNode * first = head;
       ListNode * second = previous;

       int maxsum = 0;
       while(second!= NULL){
        maxsum = max(maxsum, first->val+second->val);
        first= first->next;
        second = second->next;
       }
       return maxsum;
    }
};