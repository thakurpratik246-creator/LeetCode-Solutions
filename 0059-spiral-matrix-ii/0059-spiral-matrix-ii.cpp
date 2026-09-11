class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n , vector<int>(n)) ;
        int num = 1 ;
        int startRow = 0 , endRow = n - 1 ;
        int startCol = 0 , endCol = n - 1 ;

        while(startRow <= endRow && startCol <= endCol) {
            for(int i = startCol ; i <= endCol ; i++ ) {
                matrix[startRow][i] = num++ ;
            }
            startRow++ ;
            
            for(int i = startRow ; i <= endRow ; i++) {
                matrix[i][endCol] = num++ ;
            }
            endCol-- ;

            for(int j = endCol ; j >= startCol ; j--) {
                matrix[endRow][j] = num++ ;
            }
            endRow-- ;
            
            for(int j = endRow ; j >= startRow ; j--) {  
                matrix[j][startCol] = num++ ;
            }
            startCol++ ;   
        }
        return matrix ;
    }
};