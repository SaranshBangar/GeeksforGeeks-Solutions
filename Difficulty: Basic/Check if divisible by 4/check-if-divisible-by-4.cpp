//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    int num=((N[N.length()-2]-'0')*10)+((N[N.length()-1]-'0'));
	    if (num%4==0)
	        return 1;
	    return 0;
	}
};

//{ Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends