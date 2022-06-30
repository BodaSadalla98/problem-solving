# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        c=  0
        p1 = head
        p2 = head
        while p1 and p2:
            
            p1 = p1.next
         
        
            if p2.next and p2.next.next:
                p2 =  p2.next.next
            else:
                return False
            
            
            if(p1 == p2):
                return True
            

        return False