class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;

        int left = -1, right = -1;
        int max_val = nums[0], min_val = nums[n - 1];

        for (int i = 0; i < n; i++) {
            if (nums[i] < max_val) {
                right = i;
            } else {
                max_val = nums[i];
            }
        }

        
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > min_val) {
                left = i;
            } else {
                min_val = nums[i];
            }
        }

        
        if (left == -1) return 0;

        return right - left + 1;
    }
};