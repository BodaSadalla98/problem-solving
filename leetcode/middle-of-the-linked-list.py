# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        n = 0
        
        temp = head
        while head:
            
            head = head.next
            n += 1
            
        
        n = n // 2 
        
        
        print(n)
        while n:
            
            n -= 1 
            temp = temp.next
            
        
        return temp