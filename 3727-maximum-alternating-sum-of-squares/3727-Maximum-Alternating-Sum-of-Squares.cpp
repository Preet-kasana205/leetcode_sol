class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) > abs(b);
        });

        vector<int> even;
        vector<int> odd;

        int n = nums.size();
        int k = (n + 1) / 2;

        for (int i = 0; i < n; i++) {
            if (i < k) {
                even.push_back(nums[i]);
            } else {
                odd.push_back(nums[i]);
            }
        }

        long long score = 0;

        for (int i = 0; i < even.size(); i++) {
            score += 1LL * even[i] * even[i];
        }

        for (int i = 0; i < odd.size(); i++) {
            score -= 1LL * odd[i] * odd[i];
        }

        return score;
    }
};