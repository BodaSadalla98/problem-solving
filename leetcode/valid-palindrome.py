class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s = []
        
        for c in s:
            if c.isalnum():
                new_s.append(c.lower())
        
        for i in range (len(new_s) // 2 ):
            if new_s[i] != new_s[ (len(new_s)) -i - 1]:
                return False
        return True
        