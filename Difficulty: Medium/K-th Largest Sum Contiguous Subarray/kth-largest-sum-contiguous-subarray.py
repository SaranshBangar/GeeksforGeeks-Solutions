from typing import List


class Solution:
    def kthLargest(self, arr, k) -> int:
        n = len(arr)
        l = []
        for i in range(n):
            s = 0
            for j in range(i,n):
                s += arr[j]
                l.append(s)
        l.sort(reverse = True)
        return l[k - 1]
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3
import heapq

# Position this line where user code will be pasted.

#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        arr = list(map(int, input().split()))
        k = int(input())
        ob = Solution()
        res = ob.kthLargest(arr, k)
        print(res)
        print("~")
        t -= 1

# } Driver Code Ends