#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3


def evenOdd(arr):
    even = []
    odd = []
    for i in arr:
        if i % 2 == 0:
            even.append(i)
        else:
            odd.append(i);
    return (even, odd)



#{ 
 # Driver Code Starts.

if __name__ == '__main__':
    
    t= int(input())
    
    for _ in range(t):
        
        numbers = numbers=[int(x) for x in input().strip().split()]

        
        even,odd = evenOdd(numbers)
        
        print(*even)
        print(*odd)
        print("~")
# } Driver Code Ends