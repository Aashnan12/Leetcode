class Solution {
public:

    // vector<int> twopointer(vector<int> &arr, int k , int x){
    //     int n = arr.size();

    //     if(n == 1){
    //         return arr;
    //     }

    //     int left = 0;
    //     int right = n-1;
        
    //     while(right - left >= k){
    //         if(x - arr[left] > arr[right] - x) {
    //             left++;
    //         }
    //         else {
    //             right--;
    //         }
    //     }
    //     cout<<left<<" "<<right<<endl;
    //     return vector<int> {arr.begin() + left,arr.begin() + right + 1 };
    // }

    int LowerBound(vector<int> &arr, int x){
        int s = 0;
        int e = arr.size()-1;
        int ans = e; // Catch

        while(s <= e) {
            int mid = s+(e-s)/2;
            if(arr[mid] >= x){
                ans = mid;
                e = mid-1;
            }
            else if(arr[mid] < x){
                s = mid+1;
            }
            else {
                e = mid-1;
            }
        }
        return ans;
    }

    vector<int> BS_Plus_Two_Pointer(vector<int> &arr, int k , int x){
        int n = arr.size();

        if(n == 1){
            return arr;
        }

        int high = LowerBound(arr,x);
        int low = high-1;
        
        while(k--){
            if(low < 0)high++;
            else if(high >= arr.size())low--;
            else if(x - arr[low] > arr[high] - x) {
                high++;
            }
            else {
                low--;
            }
        }
        return vector<int> {arr.begin() + low + 1,arr.begin() + high };
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return BS_Plus_Two_Pointer(arr,k,x);
    }
};