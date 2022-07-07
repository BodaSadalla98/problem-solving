# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def calc(node):   
            if not node:
                return 0
            r = 1 + calc(node.right)
            l = 1 + calc(node.left)
            return max(r,l)
        
        return calc(root)
            