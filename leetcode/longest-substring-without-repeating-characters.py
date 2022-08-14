class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        best = 0
        l = 0
        cur_best = 0
        cur = ''
        for i,c in  enumerate(s):

            if c not in cur:
                cur += c
                cur_best +=1
            else:
                best = max(best, cur_best)  
                l = s.find(c, l, i) +1
                cur_best = i-l+1
                cur = s [l:i+1]
        best = max(best, cur_best)

        return best
