import sys
sys.set_int_max_str_digits(0)

class Solution:
    #your task is to complete this function
    #Function should return the required answer
    #You are not allowed to convert string to integer
    def remainderWith7(self, str):
        return int(str) % 7


#{ 
 # Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        str = input().strip()
        ob=Solution()
        print(ob.remainderWith7(str))
        print("~")
# Contributed by: Harshit Sidhwa
# } Driver Code Ends