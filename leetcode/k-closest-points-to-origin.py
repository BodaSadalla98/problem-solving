class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        
        d = []
        
        for p in points:
            
            d.append( [(p[0])**2 + (p[1])**2  , p] )

        d.sort(key= lambda x:  x[0])
            
        
        ret = [ ]
        
        for i in range (k):
            ret.append(d[i][1])
        return ret