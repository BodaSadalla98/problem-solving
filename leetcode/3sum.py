class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        pos = []
        neg = []
        out = []

        nums.sort()

        for i,cur in enumerate(nums):

            l = i+1
            r = len(nums) - 1

            if i > 0 and nums[i-1] == cur:
                continue
            while ( l < r  and r > -1 and l < len(nums)):

                l_val  = nums[l]
                r_val = nums[r]
                # if l_val == cur or r_val == cur:
                #     # l +=1
                if  cur + l_val + r_val  > 0:
                        r -= 1 

                elif cur + l_val + r_val  < 0:

                    l += 1

                else:
                    out.append([cur,l_val,r_val])
                    l+=1
                    
                    while(  l < len(nums)   and nums[l] == nums[l-1] ):
                        l += 1


        # out  = list(set(tuple(x) for x in out))
        return out