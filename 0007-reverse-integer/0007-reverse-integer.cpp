class Solution {
public:
    int reverse(int x) {
        int reverse_digit = 0 ;
        while ( x != 0 ) {
            int remainder = x % 10 ;
            if(reverse_digit > INT_MAX / 10 || reverse_digit < INT_MIN / 10) {
                return 0 ;
            }
            reverse_digit = ( reverse_digit * 10 ) + remainder ;
            x = x / 10 ;
            
        } 
        return reverse_digit ;       
    }
};