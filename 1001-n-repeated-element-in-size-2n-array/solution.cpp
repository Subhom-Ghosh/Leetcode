class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
            if(mp[x]==nums.size()/2) return x;
        }
        return -1;
    }
};
