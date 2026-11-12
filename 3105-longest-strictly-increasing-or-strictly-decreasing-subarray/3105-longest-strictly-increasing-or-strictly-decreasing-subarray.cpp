class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans1 = 1 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int count = 1 ;
            for(int j = i ; j < nums.size() - 1; j++) {
                if(nums[j] < nums[j + 1]) {
                    count++ ;
                } else {
                    count = 1 ;
                }
                ans1 = max(count , ans1) ;
            }
        }

        int ans2 = 1 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int count = 1 ;
            for(int j = i ; j < nums.size() - 1; j++) {
                if(nums[j] > nums[j + 1]) {
                    count++ ;
                } else {
                    count = 1 ;
                }
                ans2 = max(count , ans2) ;
            }
        }
        return max(ans1 , ans2) ;
    }
};