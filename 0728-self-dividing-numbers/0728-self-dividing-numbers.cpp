class Solution {
public:
    bool isDividing(int n) {
        string num = to_string(n);
        int k = 0;
        while (k < num.length()) {
            if (num[k] - '0' == 0)
                return false;
            if (n % (num[k] - '0') != 0) {
                return false;
            }
            k++;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {

            if (isDividing(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};