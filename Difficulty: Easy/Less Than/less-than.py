#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3


def lessThan(arr, k):
    ans = []
    for i in arr:
        if i < k:
            ans.append(i);
    return ans



#{ 
 # Driver Code Starts.

if __name__ == '__main__':
    
    t= int(input())
    
    for _ in range(t):
        
        numbers = numbers=[int(x) for x in input().strip().split()]
        k = int(input())
        
        ans = lessThan(numbers,k)
        print(*ans)
        print("~")
# } Driver Code Ends