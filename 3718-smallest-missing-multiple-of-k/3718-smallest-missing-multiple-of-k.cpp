class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;
        int val = k ;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == val) {
                val += k ;
            }
        }
        return val ;
    }
};