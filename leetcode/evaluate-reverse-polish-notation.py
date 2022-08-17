class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        
        
        ops = ['+','-','*','/']
        
        q = []
        for i in range(len(tokens)):
            
            if tokens[i] in ops:
            
                a = int(q.pop(0))
                b = int(q.pop(0))
                op = tokens[i]
                
                print(a,b,op)
                
                if op == '+':
                    c = a+b
                elif op == '-':
                    c = b-a
                elif op =='*':
                    c = a*b
                else:
                    c = int(b/a)

                q.insert(0,c)
                
            else:
                q.insert(0, tokens[i])
                    

        return q[0]
