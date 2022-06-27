
import sys
 
input=sys.stdin.readline
sys.setrecursionlimit(300000)
class node:
    def __init__(self) -> None:
        
        self.min_val = 0,
        self.max_val = 0
        self.min_cost = 0
        self.min_cost_value = 0
        self.parent = 0
        self.children = []

    def traverse(self):
        if not self.children:
            self.min_cost = 1
            self.min_cost_value = self.max_val
            return
        else:
            for cur_node in self.children:
                cur_node.traverse()
                self.min_cost += cur_node.min_cost
                self.min_cost_value += cur_node.min_cost_value

            self.min_cost_value = min(self.min_cost_value, self.max_val)

            if self.min_val > self.min_cost_value:
                self.min_cost_value = self.max_val
                self.min_cost +=1 
        return

def main():
    for _ in range(int(input())):
        n =  int(input())
        # nodes = [None] * n
        nodes = []
        for i in range (n):
            nodes.append(node())
            # nodes[i] = node()
        # parents = list(map(int, input().split()))
        *p, = map(int, input().split())
        for i in range(0,n-1):
            # p = parents[i]
            nodes[p[i]-1].children.append(nodes[i+1])
        for i in range (n):
            a,b =  map(int, input().split())
            nodes[i].min_val = a
            nodes[i].max_val = b
        nodes[0].traverse()
        print(nodes[0].min_cost )

        
main()
    