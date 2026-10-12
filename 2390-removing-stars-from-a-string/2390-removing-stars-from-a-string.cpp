class Solution {
public:
    string removeStars(string s) {
        stack<char> st ;
        for(int i = 0 ; i < s.length() ; i++) {
            if(s[i] != '*') {
                st.push(s[i]) ;
            }

            else {
                st.pop() ;
            }
        }

        string str(st.size() , 'a') ; 
        for(int i = st.size() - 1 ; i >= 0 ; i--) {
            str[i] = st.top() ;
            st.pop() ;
        }

        return str ;
    }
};