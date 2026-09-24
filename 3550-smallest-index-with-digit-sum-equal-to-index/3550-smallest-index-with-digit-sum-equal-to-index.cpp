class Solution {
public:
    int Sum(int x) {
        int sum = 0 ; 
        while(x > 0) {
            int rem = x % 10 ;
            sum += rem ;
            x /= 10 ;
        }
        return sum ;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++) {
            if(Sum(nums[i]) == i) {
                return i ;
            }
        }
            
        return -1 ;
    }
};