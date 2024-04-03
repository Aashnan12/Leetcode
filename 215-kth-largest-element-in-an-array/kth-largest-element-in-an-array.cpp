class Solution {
public:
    void BuildHeap(vector<int> &nums,int &n,int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left < n && nums[largest] < nums[left]){
            largest = left;
        }
        if(right < n && nums[largest] < nums[right]){
            largest = right;
        }
        if(largest != i){
            swap(nums[largest],nums[i]);
            BuildHeap(nums,n,largest);
        }
    }
    void Heapify(vector<int> &nums,int &n){
        for(int i=n/2-1;i>=0;i--){
            BuildHeap(nums,n,i);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        Heapify(nums,n);
        while(k != 1){
            nums[0] = nums[n-1];
            n--;
            BuildHeap(nums,n,0);
            k--;
        }
        return nums[0];
    }
};