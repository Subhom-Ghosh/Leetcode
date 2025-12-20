class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        // Constraints state nums[i] <= 10^5, so a boolean array of this size is efficient.
        // You can also use unordered_set<int>, but vector<bool> is generally faster here.
        vector<bool> seen(100001, false);
        
        int i = n - 1;
        
        // Scan from right to left to find the longest unique suffix
        while (i >= 0) {
            if (seen[nums[i]]) {
                // Duplicate found. 
                // Everything from index 0 to i (inclusive) must be removed.
                break;
            }
            seen[nums[i]] = true;
            i--;
        }
        
        // i is now the index of the right-most element that needs to be removed.
        // The number of items to remove is (i - 0 + 1) = i + 1.
        int elementsToRemove = i + 1;
        
        // If all elements are unique, i will be -1, elementsToRemove will be 0.
        if (elementsToRemove == 0) return 0;
        
        // Each operation removes 3 elements. We need ceil(elementsToRemove / 3.0).
        // Integer formula for ceil(a/b) is (a + b - 1) / b.
        return (elementsToRemove + 2) / 3;
    }
};
