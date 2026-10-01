class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int curr = 0;
        for(int i=0;i<k;i++){
            curr+=cardPoints[i];
        }
        int maxSum = curr;
        int rightIndex = n-1;
        for(int i=k-1;i>=0;i--){
            curr-=cardPoints[i];
            curr+=cardPoints[rightIndex];
            rightIndex--;
            maxSum = max(maxSum,curr);
        }
        return maxSum;
    }
};