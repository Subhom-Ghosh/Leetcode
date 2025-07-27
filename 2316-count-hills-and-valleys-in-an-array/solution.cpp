class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int>fl;
        fl.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]) fl.push_back(nums[i]);
        }
        int count = 0;
        for(int i=1;i<fl.size()-1;i++){
            if(fl[i]>fl[i+1] && fl[i]>fl[i-1]) count++;
            if(fl[i]<fl[i+1] && fl[i]<fl[i-1]) count++;

        }
        return count;
    }
};
