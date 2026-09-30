class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> str ;
        int count = 1 ;
        for(int i = 0 ; i < s.length() ; i++) {
            if(str.find(s[i]) == str.end()) {
                str.insert(s[i]) ;
            }
            else {
                count++ ;
                str.clear() ;
                str.insert(s[i]) ;
            }
        }
        return count ;
    }
};