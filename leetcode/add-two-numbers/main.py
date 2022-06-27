
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        
        ans = ListNode(0,None)
        ret = 0
        
        while l1 != None or l2 != None:
            
            if l1 != None and l2 != None:
                
                sum = ret + l1.val + l2.val
                
                l1 = l1.nextls
                l2 = l2.next
                
            
            elif l1 != None:
                
                sum = ret + l1.val
                
                l1 = l1.next
            else:
                sum = ret + l2.val
                l2 = l2.next
                
                
            ins_value = sum %10
            ret = int(sum/10)
            
            ans.val = ins_value
            cur =  ListNode(0, None)
            ans.next = cur
        
        
        
        return ans

    


a= ListNode(2, ListNode(4, ListNode(3,None)))
b= ListNode(5, ListNode(6, ListNode(4,None)))

s = Solution()
ans = s.addTwoNumbers(a,b)

while ans:
    print(ans.val)
    ans = ans.next