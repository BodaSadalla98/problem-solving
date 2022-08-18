# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        out = []
        a = [root]
        b = []
        if root:
            out.append([root.val])
            while a:
                b = []
                for node in a:
                    if node.left:
                        b.append(node.left)
                    if node.right:
                        b.append(node.right)

                if b:
                    out.append([x.val for x in b])
                a = b
            return out
        else:
            return []
