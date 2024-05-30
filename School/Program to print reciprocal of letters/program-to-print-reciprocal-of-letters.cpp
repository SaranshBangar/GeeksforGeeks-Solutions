//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        for (int i=0;i<S.length();i++)
        {
            if (S[i]>='a' && S[i]<='z')
                S[i]='z'-S[i]+'a';
            else if (S[i]>='A' && S[i]<='Z')
                S[i]='Z'-S[i]+'A';
        }
        return S;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends