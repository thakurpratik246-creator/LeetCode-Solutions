class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_Sum = INT16_MIN , curr_Sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++) {
            curr_Sum += nums[i] ;
            max_Sum = max(curr_Sum , max_Sum) ;
            if(curr_Sum < 0) {
                curr_Sum = 0 ;
            }   
        }
    return max_Sum ;
    }
};