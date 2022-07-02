class MyQueue:
    
    def __init__(self):
        self.a = []
        self.b = []

    def push(self, x: int) -> None:
        for i in range(len(self.a)):
            self.b.append(self.a.pop())
        
        self.a.append(x)
        
        for z in range(len(self.b)):
            self.a.append(self.b.pop())

    def pop(self) -> int:
        return self.a.pop()

    def peek(self) -> int:
        return self.a[-1]

    def empty(self) -> bool:
        return not len(self.a)
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()