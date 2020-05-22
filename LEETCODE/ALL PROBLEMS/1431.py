class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m = max(candies)
        return ([True is (x+extraCandies >= m) else False for x in candies])