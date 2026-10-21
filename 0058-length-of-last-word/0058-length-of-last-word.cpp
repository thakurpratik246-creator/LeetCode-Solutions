class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;
        int idx ;

        for(int i = s.length() - 1 ; i >= 0 ; i--) {
            if(s[i] !=  ' ') {
                idx = i ;
                break ;
            }
        }

        for(int i = idx ; i >= 0 ; i--) {
            if(s[i] == ' ') {
                break ;
            }
            else {
                count++ ;
            }
        }
        
        return count ;
    }
};