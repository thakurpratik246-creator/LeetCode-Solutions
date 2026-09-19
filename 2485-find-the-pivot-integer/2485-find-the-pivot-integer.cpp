class Solution {
public:

    bool isPivot(int x , int sum , int n) {
        int sum1 = 0 ;
        for(int j = x ; j <= n ; j++) {
            sum1 += j ;
        }
        if(sum == sum1) {
            return true ;
        }
        return false ;
    }

    int pivotInteger(int n) {
        if(n == 1) return 1 ;

        int sum = 0 ;
        for(int i = 1 ; i < n ; i++) {
            sum += i ;
            if(isPivot(i , sum , n)) {
                return i ;
            }
        }

        return -1 ;
    }
};