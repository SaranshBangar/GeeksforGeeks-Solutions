//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string ans="";
	    ans+=S[0];
	    for (int i=0;i<S.length();i++)
	    {
	        if (S[i]==' ')
	        {
	            while (i-1<S.length() && S[i+1]==' ')
	                i++;
                if (i+1<S.length())
                    ans+=S[i+1];
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 

// } Driver Code Ends