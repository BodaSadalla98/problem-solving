class Solution:
    def longestPalindrome(self, s: str) -> int:
        
        freq = {}
        
        for c in s:
            
            freq[c] = freq.get(c, 0) + 1
            
        
        odd = 0
        even = 0
        is_odd = 0
        for k in freq.keys():
            if freq[k] % 2 :
                odd += freq[k] -1
                is_odd= 1
                
            else:
                even += freq[k]
                
        total = even
        if is_odd:
            total += odd +1 
        return total

