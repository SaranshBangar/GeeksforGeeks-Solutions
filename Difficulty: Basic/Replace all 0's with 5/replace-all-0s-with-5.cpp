//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
        int num=0;
        while (n)
        {
            int d=n%10;
            if (d==0)
                d=5;
            num=(num*10)+d;
            n/=10;
        }
        int ans=0;
        while(num)
        {
            int r=num%10;
            ans=(ans*10)+r;
            num/=10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends