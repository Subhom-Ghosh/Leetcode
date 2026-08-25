class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int i=1;
        while(true){
           if (mp.find(k*i)!=mp.end()){
            i+=1;
           }
           else{
            return k*i;
           }
        }
    }
};