class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ; 
        for(int x : nums1) {
            ans.push_back(x) ;
        }
        for(int x : nums2) {
            ans.push_back(x) ;
        }
        sort(ans.begin() , ans.end()) ;
        int m = ans.size() ;
        if(m % 2 == 1) {
            return ans[m / 2] ;
        }
        else {
            return (ans[m / 2 - 1] + ans[m / 2]) / 2.0   ;
            
        }
        return -1 ;
    }
};