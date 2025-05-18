#User function Template for python3


class Solution:
    #Function to return a list containing the intersection of two arrays.
    def intersection(self, arr1, arr2):
        return sorted(set.union(set(arr1)&set(arr2)))
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3
import io
import sys

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        arr1 = list(map(int, input().strip().split()))
        arr2 = list(map(int, input().strip().split()))
        ob = Solution()
        l = ob.intersection(arr1, arr2)
        if (len(l) > 0):
            print(*l)
        else:
            print("[]")
        print("~")

# } Driver Code Ends