class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0 , count = 0 , maxCount = INT_MIN ;
        while(i < nums.size()) {
            if(nums[i] != 1) {
                count = 0 ;
            }
            else{
                count++ ;
            }
            maxCount = max(maxCount , count) ;
            i++ ;
        }
        return maxCount ;
    }
};