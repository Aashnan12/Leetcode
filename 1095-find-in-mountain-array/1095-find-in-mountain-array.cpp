/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findPeak(MountainArray &nums){
        int s = 0;
        int e = nums.length()-1;
        while(s<e) {
            int mid = s +(e-s)/2;
            int num = nums.get(mid);
            if(s==e)return s;
            if((mid-1 >= 0) && (mid+1 < nums.length()) && (nums.get(mid-1) < num) && (num > nums.get(mid+1))) {
                return mid;
            }
            else if(mid-1 >= 0 && nums.get(mid-1) > num) {
                e = mid;
            }
            else {
                s = mid+1;
            }
        }
        return -1;
    }
    int BS1(MountainArray &nums,int s,int e,int key){
        while(s<=e){
            int mid = s + (e-s)/2;
            int num = nums.get(mid);
            if(num == key)return mid;
            else if(num < key) s = mid+1;
            else e = mid-1;
        }
        return -1;
    }
    int BS2(MountainArray &nums,int s,int e,int key){
        while(s<=e){
            int mid = s + (e-s)/2;
            int num = nums.get(mid);
            if(num == key)return mid;
            else if(num < key) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = findPeak(mountainArr);
        int first = BS1(mountainArr,0,peak,target);
        if(first != -1)return first;
        int second = BS2(mountainArr,peak+1,mountainArr.length()-1,target);
        if(second != -1)return second;
        return -1;
    }
};