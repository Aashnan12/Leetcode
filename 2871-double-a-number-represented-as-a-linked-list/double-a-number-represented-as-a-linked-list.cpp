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
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;
        head = reverse(head);
        while(head  || carry){
            int sum = 0;
            if(head){
                sum = head->val * 2;
                head = head->next;
            }
            sum += carry;
            carry = sum/10;
            ListNode* node = new ListNode(sum%10);
            curr->next = node;
            curr = node;
        }
        return reverse(dummy->next);
    }
};