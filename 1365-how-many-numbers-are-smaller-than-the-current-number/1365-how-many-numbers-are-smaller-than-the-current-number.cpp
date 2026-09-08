class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans ;
        for(int i = 0 ; i < nums.size() ; i++) {
            int count  = 0 ;
            for(int n : nums) {
                if(n < nums[i]) {
                    count++ ;
                }
            }
           ans.push_back(count) ;
        }
        return ans ;
    }
};