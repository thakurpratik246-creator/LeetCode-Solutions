class Solution {
public:
    long long freqCount(long long p , int i , long long count) {
        if(i == 0) {
            return count ;
        }

        count += (p - pow(1000 , i)) * i + i ;
        return freqCount(pow(1000 , i) - 1 , i - 1 , count) ;
    }
    long long countCommas(long long n) {
        if(n < 1000) {
            return 0 ;
        }
        long long dig_num = n ; int freq = 0 ;
        while(dig_num > 0) {
            freq++ ;
            dig_num /= 10 ;
        }

        long long a ;
        for(int i = 1 ; i <= 5 ; i++) {
            if((i * 3) < freq && freq <= ((i+1) * 3)) {
               a =  freqCount(n , i , 0) ;
            }
        }
        return a ;
    }
};