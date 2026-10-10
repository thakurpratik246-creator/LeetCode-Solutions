class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0 ;
        sort(nums.begin() , nums.end()) ;
        int st = 0 , end = nums.size() - 1 ;
        while(st < end) {
            int sum = nums[st] + nums[end] ;
            if(sum == k) {
                count++ ;
                st++ ; end-- ;
            }
            else if(sum > k) {
                end-- ;
            }
            else {
                st++ ;
            }
        }
        return count ;
    }
};