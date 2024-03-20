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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        dummy->next = list1;
        b = b-a+2;
        while(a != 1){
            list1 = list1->next;
            a--;
        }
        int copy = b;
        ListNode* curr = list1;
        while(copy--){
            curr = curr->next;
        }
        while(list2 != NULL){
            list1->next = list2;
            list2 = list2->next;
            list1 = list1->next;
        }
        list1->next = curr;
        return dummy->next;
    }
};