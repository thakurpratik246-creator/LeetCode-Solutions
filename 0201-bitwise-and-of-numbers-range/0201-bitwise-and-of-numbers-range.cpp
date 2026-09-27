class Solution {
public:

    long long bits(int n) {
        long long count = 0 ;
        while(n > 0) {
            count++ ;
            n /= 2 ;
        }
        return count ;
    }

    int rangeBitwiseAnd(long long left, long long right) {
        int ans = left ;

        if(bits(left) != bits(right)) {
            return 0 ;
        }

        for(long long i = left + 1 ; i <= right ; i++) {
            ans &= i ;
        }

        return ans ;
    }
};