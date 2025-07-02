class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int posIndex = 0;
        int negIndex = 1;

        for (int num : nums) {
            if (num >= 0) {
                res[posIndex] = num;
                posIndex += 2;
            } else {
                res[negIndex] = num;
                negIndex += 2;
            }
        }

        return res;  // outside the loop
    }
};

