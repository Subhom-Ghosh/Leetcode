class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long currentSum = mass;
        for(int as:asteroids){
            if(as>currentSum) return false;
            else currentSum+=as;
        }
        return true;
    }
};
