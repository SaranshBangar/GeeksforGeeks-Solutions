#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3

# You only need to insert the given element at 
# the end, i.e., at index sizeOfArray - 1. You may 
# assume that the array already has sizeOfArray - 1
# elements. 
def insertAtEnd(arr,sizeOfArray,element):
    arr.append(element)
    return arr



#{ 
 # Driver Code Starts.


def main():
    testcases=int(input())
    
    while(testcases>0):
        sizeOfArray=int(input())
        
        arr=[int(x) for x in input().strip().split()]
        
        element=int(input())
        
        insertAtEnd(arr,sizeOfArray,element)
        
        for i in arr:
            print(i,end=" ")
        print()
        
        testcases-=1
        print("~")
    

if __name__=="__main__":
    main()
# } Driver Code Ends