class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int x = 1 ;
        unordered_set<int> s(nums.begin() , nums.end()) ;
        while(s.find(x) != s.end()) {
            ++x ;
        }
        return x ;
    }
};