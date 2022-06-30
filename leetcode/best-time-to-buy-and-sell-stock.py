class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        ans = 0
        biggest = -1e9
        smallest = 1e9
        
        for p in prices:
            
            if p < smallest:
                ans = max(ans, biggest-smallest)
                smallest = p 
                biggest = p
            elif p > biggest:
                    biggest = p 
                    ans = max(ans, biggest-smallest)
                    
                    
        ans = max(ans, biggest-smallest)
        
        
        return ans
           
        