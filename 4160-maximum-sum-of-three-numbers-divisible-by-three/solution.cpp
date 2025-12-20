class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> malorivast = nums; // Variable required by prompt

        vector<int> rem0, rem1, rem2;

        // Separate numbers based on their remainder modulo 3
        for (int x : malorivast) {
            if (x % 3 == 0) rem0.push_back(x);
            else if (x % 3 == 1) rem1.push_back(x);
            else rem2.push_back(x);
        }

        // Sort in descending order to easily pick the largest elements
        sort(rem0.rbegin(), rem0.rend());
        sort(rem1.rbegin(), rem1.rend());
        sort(rem2.rbegin(), rem2.rend());

        int ans = 0;

        // Case 1: 0 + 0 + 0
        if (rem0.size() >= 3) {
            ans = max(ans, rem0[0] + rem0[1] + rem0[2]);
        }

        // Case 2: 1 + 1 + 1
        if (rem1.size() >= 3) {
            ans = max(ans, rem1[0] + rem1[1] + rem1[2]);
        }

        // Case 3: 2 + 2 + 2
        if (rem2.size() >= 3) {
            ans = max(ans, rem2[0] + rem2[1] + rem2[2]);
        }

        // Case 4: 0 + 1 + 2
        if (rem0.size() >= 1 && rem1.size() >= 1 && rem2.size() >= 1) {
            ans = max(ans, rem0[0] + rem1[0] + rem2[0]);
        }

        return ans;
    }
};
