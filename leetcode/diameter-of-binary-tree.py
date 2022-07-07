# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        
        self.out = 0
        
        def calc(self,node):
            
            if not node:
                return -1
            
            r = 1 + calc(self,node.right)
            l = 1 + calc(self,node.left)
            
            self.out = max(self.out, r+l)
            return max(r,l)
        
        
        calc(self,root)
        
        return self.out