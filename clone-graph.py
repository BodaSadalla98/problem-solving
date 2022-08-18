"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""


class Solution:
    def cloneGraph(self, node: "Node") -> "Node":

        vis = {}

        def dfs(node):

            if node in vis:
                return vis[node]

            ret = Node(node.val)
            vis[node] = ret
            for n in node.neighbors:
                ret.neighbors.append(dfs(n))

            return ret

        return dfs(node) if node else None
