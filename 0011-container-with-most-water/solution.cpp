class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxarea=0;
        while(left<right){
            int width=right-left;
            int area=width*min(height[left],height[right]);
            maxarea=max(maxarea,area);
            if(height[left]<height[right]){
                left+=1;
            }
            else right-=1;
        }
    return maxarea;
    }
};
