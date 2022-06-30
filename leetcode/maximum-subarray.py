class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        cur = 0
        m = -1e9
        
        for num in nums:
            
            cur += num
            m = max(m,cur)
            
            cur = max(0, cur)
            
            
        return m