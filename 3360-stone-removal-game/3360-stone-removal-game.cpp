class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10 ;
        int count = 0 ;
        while(n >= a) {
            n -= a ;
            count++ ;
            a-- ;
        }
        return count % 2 == 1 ? true : false ;
    }
};