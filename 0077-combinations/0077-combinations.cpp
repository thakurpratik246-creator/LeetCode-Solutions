class Solution {
public:

    void getCombinations(int n , int k , int pt , vector<vector<int>>& ans , vector<int>& part) {
        if(pt > n + 1) {
            return ; 
        }
        if(part.size() == k) {
            ans.push_back(part) ;
            return ;
        }
        part.push_back(pt) ;
        getCombinations(n , k , pt + 1 , ans , part) ;
        
        part.pop_back() ;
        getCombinations(n , k , pt + 1 , ans , part) ;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans ;
        vector<int> part ;

        getCombinations(n , k , 1 , ans , part) ;
        return ans ;
    }
};