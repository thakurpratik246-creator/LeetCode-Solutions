class Solution {
public:
    int sumCounts(vector<int>& nums) {
        unordered_set<int> s ;
        int sum = 0 ;

        for(int i = 0 ; i < nums.size() ; i++) {

            for(int j = i ; j < nums.size() ; j++) {

                if(s.find(nums[j]) == s.end()) {
                    s.insert(nums[j]) ;                 //if element exists, size will remain same
                }

                sum += s.size() * s.size() ;            //sum of squares of distinct no. of elements 
            }

            s.clear() ;                                 //clear the set for next subArray
        }

        return sum ;
    }
};