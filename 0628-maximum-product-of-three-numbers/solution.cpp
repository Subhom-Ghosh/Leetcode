class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int res1 = 1; // three largest
        for (int i = n - 1; i >= n - 3; i--) {
            res1 *= nums[i];
        }

        int res2 = nums[n - 1]; // largest
        for (int i = 0; i < 2; i++) {
            res2 *= nums[i]; // two smallest
        }

        return max(res1, res2);
    }
};
