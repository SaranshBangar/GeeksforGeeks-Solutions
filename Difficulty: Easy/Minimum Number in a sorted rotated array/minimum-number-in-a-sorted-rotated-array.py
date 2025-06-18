#User function Template for python3


class Solution:
    
    #Function to find the minimum element in sorted and rotated array.
    def minNumber(self, arr,low,high):
        if arr[low] < arr[high]:
            return arr[low]
        else:
            ans = arr[high]
            while high > 0 and arr[high - 1] < ans:
                high -= 1
                ans = arr[high]
            return ans
        return 0