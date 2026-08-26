class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans ;
        int m = matrix.size() , n = matrix[0].size() ;
        int startRow = 0 , endRow = m - 1 ;
        int startCol = 0 , endCol = n - 1 ;

        while(startRow <= endRow && startCol <= endCol) {
            for(int i = startCol ; i <= endCol ; i++ ) {
                ans.push_back(matrix[startRow][i]) ;
            }

            for(int i = startRow + 1 ; i <= endRow ; i++) {
                ans.push_back(matrix[i][endCol]) ;
            }

            for(int j = endCol - 1 ; j >= startCol ; j--) {
                if(startRow == endRow) {
                    break ;
                }
                ans.push_back(matrix[endRow][j]) ;
            }

            for(int j = endRow - 1 ; j >= startRow + 1 ; j--) {
                if(startCol == endCol) {
                    break ;
                }   
                ans.push_back(matrix[j][startCol]) ;
            }

            startRow++ ; endRow-- ;
            startCol++ ; endCol-- ;
        }
        return ans ; 
    }
};