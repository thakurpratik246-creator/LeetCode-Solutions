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

        int x , sum = 0 ;
        for(int i = 1 ; i < n ; i++) {
            sum += i ;
            x = i ;
            if(isPivot(x , sum , n)) {
                return x ;
            }
        }
        
        return -1 ;
    }
};