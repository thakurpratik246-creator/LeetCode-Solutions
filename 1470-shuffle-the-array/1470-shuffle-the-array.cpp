class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n + n , 0)  ;
        int k = 1 ;
        for(int i = n ; i < n + n ; i++) { 
            ans[k] = nums[i] ;
            k += 2 ;
        }
        k = 0 ;
        for(int i = 0 ; i < n ; i++) {
            ans[k] = nums[i] ;
            k += 2 ; 
        }
        return ans ;
    }
};