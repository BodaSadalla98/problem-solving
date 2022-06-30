class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        
        a = [0] * 26
        b = [0] * 26
        
        base = ord('a')

        for c in s:
            a[ ord(c) - base] += 1
            
        for c in t:
            b[ ord(c) - base] += 1
        
        
        if a == b:
             return True
        else:
            return False
        