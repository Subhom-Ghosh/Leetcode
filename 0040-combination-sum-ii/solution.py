class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def solve(ind:int,target:int, ds:list[int]):
            if target == 0:
                result.append(ds[:])
                return
            for i in range(ind,len(candidates)):
                if i>ind and candidates[i]==candidates[i-1]:
                    continue
                if candidates[i]>target:
                    break
                ds.append(candidates[i])
                solve(i+1,target-candidates[i],ds)
                ds.pop()
        candidates.sort()
        result=[]
        solve(0,target,[])
        return result

        
