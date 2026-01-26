class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;
        for(int i=1;i<n;i++){
            min_diff=min(min_diff,arr[i]-arr[i-1]);
        }
        vector<vector<int>> result;
        for(int i=1;i<n;i++){
            if (min_diff==arr[i]-arr[i-1]){
                result.push_back({arr[i-1],arr[i]});
            }
        }
        return result;
    }
};
