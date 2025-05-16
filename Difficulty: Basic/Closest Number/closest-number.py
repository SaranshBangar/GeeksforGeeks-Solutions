#User function Template for python3

class Solution:
    def closestNumber(self, n , m):
        q = n // m
        n1 = m * q
        n2 = m * (q + 1)
        if abs(n - n1) < abs(n - n2):
            return n1
        elif abs(n - n1) > abs(n - n2):
            return n2
        else:
            return n1 if abs(n1) > abs(n2) else n2
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        M = int(input())

        ob = Solution()
        print(ob.closestNumber(N, M))
        print("~")

# } Driver Code Ends