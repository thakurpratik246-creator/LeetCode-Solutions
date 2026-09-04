class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int> s ;
        vector<int> ans ;
        int n = nums.size() ;
        int a , actualSum = 0 ;

        for(int i= 0 ; i < n ; i++) {
            actualSum += nums[i] ;
            if(s.find(nums[i]) != s.end()) {
                a = nums[i] ;
                ans.push_back(a) ;
            }
            s.insert(nums[i]) ;
        }
        
        int expectedSum = (n) * (n + 1) / 2 ;
        int b = expectedSum + a - actualSum ;
        ans.push_back(b) ; 
        return ans ;
    }
};