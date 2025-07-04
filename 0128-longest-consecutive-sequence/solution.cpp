class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n=nums.size();
        int longest=1, cnt=0, last_smaller=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==last_smaller){
                cnt+=1;
                last_smaller=nums[i];
            }
            else if(last_smaller!=nums[i]){
                cnt=1;
                last_smaller=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};
