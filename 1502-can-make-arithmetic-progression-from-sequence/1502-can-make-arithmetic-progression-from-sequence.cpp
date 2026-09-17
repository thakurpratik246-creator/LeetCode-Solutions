class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() <= 2) return true ;
        sort(arr.begin() , arr.end()) ;
        for(int i = 0 ; i <= arr.size() - 3 ; i++) {
            int a = arr[i] , b = arr[i + 1] , c = arr[i+2] ; 
            if(a - b != b - c) {
                return false ;
            }
        }
        return true ;
    }
};