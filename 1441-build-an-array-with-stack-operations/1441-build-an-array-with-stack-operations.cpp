class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s ;
        vector<string> ans ;

        int i = 1 , idx = 0 ;
        while(i <= n && idx < target.size()) {
            s.push(i) ;
            ans.push_back("Push") ;

            if(s.top() != target[idx]) {
                ans.push_back("Pop") ;
                s.pop() ;
            }
            else {
                idx++ ;
            }

            i++ ;
        }

        return ans ;
    }
};