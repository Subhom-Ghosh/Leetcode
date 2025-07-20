class Solution:
    def countGoodNumbers(self, n: int) -> int:
        Mod = 10**9+7
        even = (n+1)//2
        odd = n//2
        return (pow(5,even,Mod)*pow(4,odd,Mod))%Mod
