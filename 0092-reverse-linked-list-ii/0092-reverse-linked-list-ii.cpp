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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode *leftpre = dummy;
        ListNode *connect = head;

        for(int i=0;i<left-1;i++){
            leftpre = leftpre->next;
            connect = connect->next;
        }

        ListNode *prev = NULL;
        ListNode *curr = connect;

        for(int i=0 ;i<right-left+1;i++){
            ListNode *nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        leftpre->next = prev;
        connect->next = curr;
        return dummy->next;
    }
};