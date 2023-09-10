class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxarea =0
        l = len(height)
        left=0
        right= l-1
        while left<right:
            area = min(height[left], height[right]) * (right-left)
            maxarea = max(maxarea, area)

            if height[left] <height[right]:
                left = left +1
            else:
                right = right - 1
        return maxarea
