
class Solution {
public:
    void Combination(vector<vector<int>>& ans, vector<int>& part, vector<int>& arr, int idx, int target) {
        if(target == 0) {
            ans.push_back(part);
            return;
        }

        if(idx >= arr.size() || target < 0) {
            return;
        }

        // Since array is sorted, no further element can fit
        if(arr[idx] > target) return;

        // Include
        part.push_back(arr[idx]);

        Combination(ans, part, arr, idx + 1, target - arr[idx]);

        part.pop_back();

        // Skip duplicates in the exclude branch
        while(idx + 1 < arr.size() && arr[idx] == arr[idx + 1]) {
            idx++;
        }

        // Exclude
        Combination(ans, part, arr, idx + 1, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        vector<int> part;

        Combination(ans, part, arr, 0, target);

        return ans;
    }
};
