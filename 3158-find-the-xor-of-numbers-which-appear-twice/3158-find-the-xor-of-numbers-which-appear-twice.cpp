class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;
        vector<int> ans ;
        for(int i = 0 ; i < nums.size() - 1 ; i++) {
            if(nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]) ;                
            }
        }
        int n = ans.size() ;
        if(n == 0) {
            return 0 ;
        } else {
            int product = 0;
            for(int val : ans) {
                product ^= val ;
            }
            return product ; 
        }
    }
};