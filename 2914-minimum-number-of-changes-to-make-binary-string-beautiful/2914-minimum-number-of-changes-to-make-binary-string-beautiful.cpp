class Solution {
public:
    int minChanges(string s) {
        int changes = 0 ;
        for(int i = 0 ; i < s.size() ; i+=2) {
            if(s[i+1] != s[i]) {
                changes++ ;
                s[i+1] = s[i] ;
            }
        }
        return changes ;
    }
};