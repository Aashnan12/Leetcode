int binary_search(vector<int>& nums, int s, int e ,int key)
{
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start<=end)
    {
        if(nums[mid]==key)
        return mid;
        if(nums[mid]>key)
        end = mid - 1;
        else
        start = mid + 1;

        mid = start + (end-start)/2;
    }
    return -1;
}

int pivot(vector<int>& nums,int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;

    while(start<end)
    {
        if(nums[mid] >= nums[0])
        start = mid + 1;
        else
        end = mid;
        
        mid = start + (end-start)/2;

    }
    return start;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n = nums.size();
       int pivotx = pivot(nums,n);
       if(target >= nums[pivotx] && target <= nums[n-1])
       return binary_search(nums,pivotx,n-1,target);
       else
       return binary_search(nums,0,pivotx-1,target);
    }
};













