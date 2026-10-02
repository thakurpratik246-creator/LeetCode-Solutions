class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> answer;
        sort(nums.begin(), nums.end());

        int count = 1;

        for (int i = 1; i <= nums.size(); i++) {

            if (i < nums.size() && nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > nums.size() / 3) {
                    answer.push_back(nums[i - 1]);
                }

                count = 1;
            }
        }
        return answer ;
    }
};