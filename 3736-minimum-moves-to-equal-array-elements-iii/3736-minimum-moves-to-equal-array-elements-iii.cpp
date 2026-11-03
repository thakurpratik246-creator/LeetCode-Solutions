class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = *max_element(nums.begin(), nums.end());
        int moves = 0 ;
        for (int val : nums) {
            moves += ans - val ;
        }
        return moves ;
    }
};