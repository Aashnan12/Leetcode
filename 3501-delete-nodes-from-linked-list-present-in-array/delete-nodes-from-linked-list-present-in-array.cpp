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
        unordered_set<int> st;
        for(auto num : nums){
            st.insert(num);
        }

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;

        while(head){
            while(head && st.find(head->val) != st.end()){
                head = head->next;
            }
            curr->next = head;
            if(head)head = head->next;
            curr = curr->next;
        }
        return dummy->next;
    }
};