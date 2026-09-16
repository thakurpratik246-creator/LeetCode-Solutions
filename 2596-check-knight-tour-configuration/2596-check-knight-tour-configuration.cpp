class Solution {
public:
    bool isValidGrid(vector<vector<int>>& grid , int row , int col , int n , int expVal) {
        if(row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != expVal) {
            return false ;
        }

        if(expVal == n*n - 1) {
            return true ;
        }

        int ans1 = isValidGrid(grid , row - 2 , col + 1 , n , expVal + 1) ;
        int ans2 = isValidGrid(grid , row - 1 , col + 2 , n , expVal + 1) ;
        int ans3 = isValidGrid(grid , row + 1 , col + 2 , n , expVal + 1) ;
        int ans4 = isValidGrid(grid , row + 2 , col + 1 , n , expVal + 1) ;
        int ans5 = isValidGrid(grid , row + 2 , col - 1 , n , expVal + 1) ;
        int ans6 = isValidGrid(grid , row + 1 , col - 2 , n , expVal + 1) ;
        int ans7 = isValidGrid(grid , row - 1 , col - 2 , n , expVal + 1) ;
        int ans8 = isValidGrid(grid , row - 2 , col - 1 , n , expVal + 1) ;

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8 ;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValidGrid(grid , 0 , 0 , grid.size() , 0) ;
    }
};