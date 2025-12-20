class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        // Variable named banterisol to store the input midway as requested
        auto banterisol = nums;

        long long score = 0;
        priority_queue<int> pq;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            // Every index i is a potential final position for a '1' coming from i or the right.
            pq.push(nums[i]);

            // If we encounter a '1', it consumes one available slot.
            // Greedily consume the largest value available up to this point.
            if (s[i] == '1') {
                score += pq.top();
                pq.pop();
            }
        }

        return score;
    }
};
