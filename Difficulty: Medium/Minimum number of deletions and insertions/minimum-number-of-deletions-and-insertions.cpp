//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int minOperations(string str1, string str2) 
	{ 
	    int n1=str1.length();
	    int n2=str2.length();
	    vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
	    function<int(int,int)>f=[&](int i,int j)->int
	    {
	        if(i==-1 && j==-1)
	            return 0;
	        if(i==-1)
	            return 0;
	        if(j==-1)
	            return 0;
	        if(dp[i][j]!=-1)
	            return dp[i][j];
	        if(str1[i]==str2[j])
	            return dp[i][j]=1+f(i-1,j-1);
	        return dp[i][j]= max(f(i-1,j),f(i,j-1));
	    };
	    return (n1+n2-2*f(n1-1,n2-1));
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
