class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        // last[j] = rightmost index in word1 that can match word2[j]
        // while still allowing word2[j+1...] to be matched exactly.
        vector<int> last(m, -1);

        int i = n - 1;
        int j = m - 1;

        // Build the rightmost exact subsequence of word2.
        while (i >= 0 && j >= 0) {
            if (word1[i] == word2[j]) {
                last[j] = i;
                j--;
            }
            i--;
        }

        vector<int> ans(m);

        bool mismatchUsed = false;
        j = 0;

        // Greedily choose the smallest possible indices.
        for (i = 0; i < n && j < m; i++) {

            // Exact match: always take it because it is the earliest
            // possible index for this position.
            if (word1[i] == word2[j]) {
                ans[j] = i;
                j++;
            }

            // Use the one allowed mismatch.
            else if (!mismatchUsed &&
                     (j == m - 1 || i < last[j + 1])) {

                ans[j] = i;
                j++;
                mismatchUsed = true;
            }
        }

        // Could not construct a sequence of length m.
        if (j != m) {
            return {};
        }

        return ans;
    }
};