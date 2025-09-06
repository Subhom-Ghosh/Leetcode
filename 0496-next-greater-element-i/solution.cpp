class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nge;   // stores {value → next greater}
        stack<int> st;

        // Build next greater mapping for nums2
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nge[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Answer for nums1
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(nge.count(x) ? nge[x] : -1);
        }
        return ans;
    }
};

