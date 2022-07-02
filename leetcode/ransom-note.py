class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        a = [0] * 26
        b = [0] * 26
        
        base = ord('a')


            
        for c in magazine:
            b[ ord(c) - base] += 1
            
        
        for c in ransomNote:
            cur =  ord(c) - base
            
            if b[cur]:
                b[cur] -=1
            
            else:
                return False
            
        return True
            
        
        
        