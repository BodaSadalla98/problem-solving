# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def calc(self,node):

        if not node:
            return 0, True

        else:

            r, bal_r = self.calc(node.left)
            l , bal_l = self.calc(node.right)
            bal = bal_r and bal_l and ( abs(r-l) < 2)
            return 1+ max(r,l), (bal)

    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        
        _, ret = self.calc(root)
        
        
        return ret
    
