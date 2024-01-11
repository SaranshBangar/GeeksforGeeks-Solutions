//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int findRemainder(int num1,int num2)
    {
        int ans=num1%num2;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1,num2;
        cin>>num1>>num2;
        Solution ob;
        int ans  = ob.findRemainder(num1,num2);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends