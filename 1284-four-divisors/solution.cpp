class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalSum = 0;
        for(int n:nums){
            unordered_set<int>divisors;
            for(int i=1;i*i<=n;i++){
                if(n%i==0){
                    divisors.insert(i);
                    divisors.insert(n/i);
                }
                if(divisors.size()>4) break;
            }
            if(divisors.size()==4){
                for(int d:divisors){
                    totalSum+=d;
                }
            }
        }
        return totalSum;

    }
};
