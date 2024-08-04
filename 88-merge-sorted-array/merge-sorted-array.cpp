class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for(int i=0;i<n;i++){
            A[i+m] = B[i];
        }

        int len = m + n;
        int gap = len/2 + len%2;
        while(gap > 0){
            int i = 0, j = gap;
            while(j<len){
                if(A[i] > A[j]){
                    swap(A[i],A[j]);
                }
                i++;
                j++;
            }
            gap = gap<=1 ? 0 : (gap/2) + (gap%2);
        }
    }
};




// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m-1 , j = 0;

//         while(i>=0 && j<n){
//             if(nums1[i] > nums2[j]){
//                 swap(nums1[i--],nums2[j++]);
//             }
//             else{
//                 break;
//             }
//         }

//         sort(nums1.begin(),nums1.begin()+m);
//         sort(nums2.begin(),nums2.end());

//         for(int i=0;i<n;i++){
//             nums1[i+m] = nums2[i];
//         }
//     }
// };