class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ;
        int k = 0 , st = 0 , end = n - 1 ;
        while(st <= end) {
            if(nums[st] == nums[st + 1]) {
                st++ ;
            } else {
                nums[k++] = nums[st] ;
            }
            
            if(nums[end] == nums[end - 1]) {
                end-- ;
            } else {
                nums[k++] = nums[end] ;
            }
            st++ ;
            end-- ;
        }
        return {nums[0] , nums[1]} ;
    }
};