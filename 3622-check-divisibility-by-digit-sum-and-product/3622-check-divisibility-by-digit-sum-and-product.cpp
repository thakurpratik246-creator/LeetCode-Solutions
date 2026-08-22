class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0 , product = 1  , x = n ;
        while(x > 0) {
            int remainder = x % 10 ;
            sum += remainder ;
            product *= remainder ;
            x /= 10 ;
        }
        if(n % (sum + product) == 0) {
            return true ;
        }
        return false ;
    }
};