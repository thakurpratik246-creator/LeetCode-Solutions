class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans ;
        int m = 0 , n = 0 ;
        while(m < nums1.size() && n < nums2.size()) {
            if(nums1[m] < nums2[n]) {
                ans.push_back(nums1[m]) ;
                m++ ;
            }
            else {
                ans.push_back(nums2[n]) ;
                n++ ;
            }
        }
        while(m < nums1.size()) {
            ans.push_back(nums1[m]) ;
            m++ ;
        }
        while(n < nums2.size()) {
            ans.push_back(nums2[n]) ;
            n++ ;
        }
        
    
        int x = ans.size() ;
        if(x % 2 == 1) {
            return ans[x / 2] ;
        }
        else {
            return (ans[x / 2 - 1] + ans[x / 2]) / 2.0   ;
            
        }
        return -1 ;
    }
};