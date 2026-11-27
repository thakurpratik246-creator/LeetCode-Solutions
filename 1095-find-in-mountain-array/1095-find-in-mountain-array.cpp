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
    int findInMountainArray(int target, MountainArray &mountainArr) {

    int n = mountainArr.length();
    int a;

    // Find peak using binary search
    int l = 0, r = n - 1;

    while(l < r) {
        int mid = l + (r - l) / 2;

        if(mountainArr.get(mid) < mountainArr.get(mid + 1)) {
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }

    a = l;

    // Search increasing part
    l = 0, r = a;

    while(l <= r) {
        int mid = l + (r - l) / 2;
        int val = mountainArr.get(mid);

        if(val == target) return mid;

        if(val < target) l = mid + 1;
        else r = mid - 1;
    }

    // Search decreasing part
    l = a + 1, r = n - 1;

    while(l <= r) {
        int mid = l + (r - l) / 2;
        int val = mountainArr.get(mid);

        if(val == target) return mid;

        if(val > target) l = mid + 1;
        else r = mid - 1;
    }

    return -1;
    }
};