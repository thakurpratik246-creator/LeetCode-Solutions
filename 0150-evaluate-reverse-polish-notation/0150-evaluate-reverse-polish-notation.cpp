class Solution {
public:
    bool isDigit(string s) {
        if(s == "+" || s == "*" || s == "-" || s == "/") {
            return false ;
        }
        
        return true ;
    }

    int ops(int a , int b , string t) {
        if(t == "+") {
            return a + b ;
        } 
        else if(t == "-") {
            return a - b ;
        }
        else if(t == "*") {
            return a * b ;
        }
        return a / b ;
    }

    int evalRPN(vector<string>& tokens) {
        if(tokens.size() == 1) {
            return stoi(tokens[0]) ;
        }

        int ans ;
        stack<int> s ;
        for(int i = 0 ; i < tokens.size() ; i++) {
            if(isDigit(tokens[i])) {
                s.push(stoi(tokens[i])) ;
            }
            else {
                int b = s.top() ;
                s.pop() ;

                int a = s.top() ;
                s.pop() ;

                ans = ops(a , b , tokens[i]) ; 
                s.push(ans) ;
            }
        }
        return ans ;
    }
};