//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        bool cap=false;
        if (s[0]>='A' && s[0]<='Z')
            cap=true;
        for (int i=0;i<s.length();i++)
        {
            if (cap)
                s[i]=toupper(s[i]);
            else s[i]=tolower(s[i]);
        }
        return s;
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends