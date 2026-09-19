class Solution {
public:
    bool isPalindrome(int x) {
        unsigned new_digit = 0 , original_digit = x ;
        while(x > 0) {
            int remainder = x % 10 ;
            new_digit = (new_digit * 10) + remainder ;
            x /= 10 ;  
        }

        if(new_digit == original_digit){
            return {true} ;
        } else {
            return {false} ;
        }
        return {} ;
    }
};