# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    cnt = 0
    ans = None
    def calc(self, node,p,q):
        
        ret = 0
        if not node:
            return ret, None
        
        elif node.val == p or node.val == q:
            ret = 1
            

        
        a, a_ans = self.calc(node.left,p,q)
        b, b_ans = self.calc(node.right,p,q)
        
        if a  and b :
            return 2,node
        if ret:
            if a+b == 1:
                return 2, node
            else:
                return 1, None
        if a+b == 1:
                return 1,None
        elif b ==2:
            return 2, b_ans
        elif a ==2:
            return 2, a_ans
        else:
            return 0,None
        
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        a,b = self.calc(root, p.val, q.val)
        
        return b
        
        