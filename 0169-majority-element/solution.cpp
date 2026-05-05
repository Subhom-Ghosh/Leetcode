class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int candidate;

        for(int num:nums){
            if(cnt==0){
                //cnt+=1;
                candidate = num;
            }
            cnt+=(num==candidate)?1:-1;
        }
        int cnt1=0;
        for(int num:nums){
            if(num==candidate) cnt1++;
        }
        if(cnt1>n/2) return candidate;
        return -1;
    }
};
