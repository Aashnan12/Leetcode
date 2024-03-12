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
    ListNode* ToLinkedList(vector<int> arr){
        ListNode* node = new ListNode(0);
        ListNode* connect = node;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 0){
                connect->next = new ListNode(arr[i]);
                connect = connect->next;
            }
        }
        connect->next = NULL;
        return node->next;
    }
    void ToArray(vector<int> &arr,ListNode* head){
        while(head != NULL){
            arr.push_back(head->val);
            head = head->next;
        }
    }
    ListNode* removeZeroSumSublists(ListNode* head) {
        vector<int> arr;
        ToArray(arr,head);
        int n = arr.size();
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += arr[j];
                if(sum == 0){
                    for(int k=i;k<j+1;k++){
                        arr[k]=0;
                    }
                }
            }
        }
        for(auto i : arr){
            cout<<i<<" ";
        }
        if(arr.empty()) return NULL;
        ListNode* node = ToLinkedList(arr);
        return node;
    }
};