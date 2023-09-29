class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        if (len(nums)==3):
            return sum(nums)

        x = len(nums)
        nums.sort()
        prevsum = 0

        tmp=10000
        for i in range(x):
            left=i+1
            right=x-1
            
            while (left<right):
                s=nums[i]+nums[left]+nums[right]
                dif= abs(target-s)
                if(s==target):
                    return s
                if(dif<tmp):
                    tmp=dif
                    prevsum=s
                if(s < target):
                    left+=1
                else:
                    right-=1
        return prevsum           
