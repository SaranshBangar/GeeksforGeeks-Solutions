//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool prime (int N)
    {
        if (N<2)
            return false;
        if(N==2)
            return true;
        if(N%2==0)
            return false;
        for(int i=3;(i*i)<=N;i+=2)
        {
            if(N%i==0)
                return false;
        }
        return true;
    }
    
	int fullPrime(int N)
	{
	    if (prime(N))
	    {
	        while (N)
	        {
	            if (prime(N%10))
	                N/=10;
                else return 0;
	        }
	    }
	    else return 0;
	    return 1;
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends