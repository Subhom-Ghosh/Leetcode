class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        ds=[]
        def solve(ind:int):
            ans.append(ds[:])
            for i in range(ind,len(nums)):
                if(i!=ind and nums[i]==nums[i-1]):
                    continue
                ds.append(nums[i])
                solve(i+1)
                ds.pop()
        nums.sort()
        solve(0)
        return ans

        
