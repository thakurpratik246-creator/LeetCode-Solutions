class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans ;
        sort(potions.begin() , potions.end()) ;

        int i = 0 ;

        while(i < spells.size()) {
            int count = 0 ;
            int st = 0 , end = potions.size() - 1 ;
            while(st <= end) {
                int mid = st + (end - st) / 2 ;
                if(1LL * spells[i] * potions[mid] >= success) {
                    count = potions.size() - mid ;
                    end = mid - 1 ;
                }
                else {
                    st = mid + 1 ;
                }
            }
            ans.push_back(count) ;
            i++ ;
        }
        
        return ans ;
    }
};