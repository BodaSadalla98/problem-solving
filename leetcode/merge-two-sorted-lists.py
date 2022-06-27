# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dum = ListNode()
        h = dum 
        
        while list1 and list2:
            if list1.val < list2.val:
                h.next = list1
                list1 = list1.next
            else:
                h.next = list2
                list2 = list2.next
            h = h.next
        
        if list1:
            h.next = list1
            list1 = list1.next
        if list2:
            h.next = list2
            list2 = list2.next
            
        return dum.next
            
            