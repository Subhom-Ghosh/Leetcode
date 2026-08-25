class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s(nums.begin(),nums.end());
        int multiple = k;

        while(s.find(multiple)!=s.end()){
            multiple+=k;
        }
        return multiple;
    }
};