class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minelem = *min_element(nums.begin(),nums.end());
        int maxelem = *max_element(nums.begin(),nums.end());

        unordered_set<int>st(nums.begin(),nums.end());

        vector<int>ans;

        for(int i=minelem;i<=maxelem;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }

            
        }
        return ans;

    }
};