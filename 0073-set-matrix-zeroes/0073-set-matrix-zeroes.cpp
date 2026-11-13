class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size() ;
        vector<pair<int , int>> ans; 
        vector<int> part ;

        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(matrix[i][j] == 0) {
                    ans.push_back({i , j}) ;
                }
            }
        }

        for(int i = 0 ; i < ans.size() ; i++) {
            for(int k = 0 ; k < m ; k++) {
                matrix[k][ans[i].second] = 0 ;
            }
            for(int l = 0 ; l < n ; l++) {
                matrix[ans[i].first][l] = 0 ;
            }
        }
    }
};