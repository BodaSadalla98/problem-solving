class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        diff = abs (len(a) - len(b))
        
        if len(a) > len(b):
            b = '0' * diff  + b
        else:
            a = '0' * diff  + a
            
        carry = 0
        out = ''
        
        a = a[::-1]
        b = b[::-1]
        
        for aa,bb in zip(a,b):
            
            cur = int(aa) + int(bb) + carry
            
            if cur == 0 or cur == 1 :
                out += str(cur)
                carry = 0
            elif cur  == 2:
                out += '0'
                carry = 1
            else:
                out += '1'
                carry = 1
                
        if carry :
            out += '1'
            
        out = out [::-1]
        
        return out
        
    
        