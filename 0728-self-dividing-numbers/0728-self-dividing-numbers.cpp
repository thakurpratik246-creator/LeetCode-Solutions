class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for (int n = left; n <= right; n++) {

            int x = n ;
            bool self_Dividing = true ;

            while(x > 0) {
                int digit = x % 10 ;

                if(digit == 0 || n % digit != 0) {
                    self_Dividing = false ;
                    break ;
                }
                
                x /= 10 ;
            }

            if (self_Dividing) {
                ans.push_back(n);
            }
        }

        return ans;
    }
};