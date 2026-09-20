class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0 ;
        int n = 0 ;
        while(n < s.length()) {
            int product = product * (123 - s[n]) * (n + 1) ;
            sum += product ;
            n++ ;
            product = 1 ;
        }
        return sum ;
    }
};