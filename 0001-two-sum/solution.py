class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap={}
        for i,num in enumerate(nums):
            com = target-num
            if com in hashmap:
                return (i,hashmap[com])
            hashmap[num]=i
