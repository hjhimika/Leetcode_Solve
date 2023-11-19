class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        n=len(nums)
        nums.sort()
        
        ans= []
        for i in range(n-3):
            if i> 0 and nums[i] == nums[i-1]:
                continue
            for j in range(i+1, n-2):
                if j > i+1 and nums[j] == nums[j-1]:
                    continue
                low= j+1
                high= n-1
                while low< high:
                    tmp =  nums[i] +nums[j] + nums [low]+ nums[high]
                    if tmp == target:
                        ans += [nums[i], nums[j], nums [low], nums[high]],

                        while low < high and nums[low] == nums[low+1]:
                            low+=1
                        low+=1

                        while low < high and nums[high] == nums[high-1]:
                            high-=1
                        high-= 1    

                    elif tmp< target:
                        low+=1
                    else:
                        high-=1
        return ans


        
