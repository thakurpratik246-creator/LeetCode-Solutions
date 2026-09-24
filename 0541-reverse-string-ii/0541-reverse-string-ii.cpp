class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int i = 0 ;
        while(i < n) {
            int end = min(i + k, n) ;
            reverse(s.begin() + i, s.begin() + end) ;
            i += 2 * k ;
        }

        return s;
    }
};