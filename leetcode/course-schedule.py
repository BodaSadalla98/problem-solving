class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        taken = [0] * numCourses
        can = [0] * numCourses
        adj = [[] for i in range (numCourses)]
        
        for p in prerequisites:
            adj[p[0]].append(p[1])
            
        start = []
        
        for i,j in enumerate(adj):
            if  j:
                start.extend(j)
        
        start = [ x  for x in range(numCourses) if x not in start]
                
        print(start)
        
        def dfs(cur):
           
        
            taken[cur] = 1
        
            temp = 1
            

            if  adj[cur]:

                for child in adj[cur]:
                    if taken[child]:
                        
                        temp = temp & can[child]
                    else:
                        temp = temp & dfs(child)
                    
            can[cur] = temp  
            return  temp
                    
            
        for i in start:
            dfs(i)
        
        for i in can:
            if not i:
                return False 
        return True 