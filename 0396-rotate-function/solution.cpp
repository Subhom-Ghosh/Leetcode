class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int curr_f = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            curr_f += i*nums[i]; 
        }
    int max_f = curr_f;
        for(int i = n-1;i>0;i--){
            curr_f = curr_f + sum - n * nums[i];
            max_f = max(max_f, curr_f);
        }
        return (int)max_f;
    }
};
