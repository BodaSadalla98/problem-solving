# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        s = []
        
        while head:
            
            s.append(head)
            head = head.next
        
        ret = ListNode()
        
        out = ret
        
        while s:
            
            ret.next = s.pop()
            ret = ret.next
            
        ret.next = None
        return out.next
        