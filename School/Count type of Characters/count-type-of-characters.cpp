//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string S)
        {
            vector<int>ans;
            int a=0, A=0, num=0, spc=0;
    	    for (int i=0;i<S.length();i++)
    	    {
    	        if (S[i]>='0' && S[i]<='9')
    	            num++;
	            else if (S[i]>='a' && S[i]<='z')
	                a++;
                else if ((S[i]>='A' && S[i]<='Z'))
                    A++;
                else spc++;
    	    }
    	    ans.push_back(A);
    	    ans.push_back(a);
    	    ans.push_back(num);
    	    ans.push_back(spc);
    	    return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends