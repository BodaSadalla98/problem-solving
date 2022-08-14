



## Messy code not the best


class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        
        
        ## Binary search with the begginnings?
        
        
        if not intervals:
            return [newInterval]
        
        target = newInterval[0]

        
        l_index = 0
        r_index = len(intervals) -1
        
        while l_index < r_index:
            
            mid_index =  (l_index + r_index) // 2
            
  
            
            if target > intervals[mid_index][0]:
                l_index = mid_index + 1
                
            elif target <= intervals[mid_index][0]:
                
                r_index = mid_index  - 1
       
        mid_index =  (l_index + r_index) // 2
        
        print(mid_index)
        
        mid_index = max(0, mid_index)
        if target > intervals[mid_index][0]:
            
                intervals.insert(  mid_index +1 ,newInterval )
        elif target <= intervals[mid_index][0]:
            
                intervals.insert(  mid_index ,newInterval )
#         else:
            
#             intervals[mid_index][1] += newInterval[1]
            
            
        out = []
        
        
        print(intervals)
        for i in range(1, len(intervals) ):
            ll, lr = intervals[i-1]
            rl , rr  = intervals[i]
            
            if lr < rl : 
                out.append( intervals[i-1])
                
            else:
                r = max(rr, lr)
                intervals[i] = [ll,r]
                
        out.append(intervals[-1])
        
        print(intervals)
        return out