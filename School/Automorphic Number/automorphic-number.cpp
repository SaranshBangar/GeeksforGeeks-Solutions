//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    if (n%10==0 || n%10==1 || n%10==5 || n%10==6)
		        return "Automorphic";
	        return "Not Automorphic";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends