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
      
        ListNode *dummy = new ListNode(-1);
        ListNode *ans = dummy;

        if(list1 == NULL) {
            return list2;
        }
        if(list2 == NULL) {
            return list1;
        }

        ListNode *left = list1;
        ListNode *right = list2;

        while(left && right) {
            if(left->val <= right->val) {
                ans->next = left;
                ans = left;
                left = left->next;
            }
            else {
                ans->next = right;
                ans = right;
                right = right->next;
            }
        }
        if(left) {
            ans->next = left;
        }
        if(right) {
            ans->next = right;
        }
        return dummy->next;
    }
};