//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string stringSort (string s)
    {
        string low="", up="";
        for (int i=0;i<s.length();i++)
        {
            if (s[i]>='A' && s[i]<='Z')
                up+=s[i];
            else low+=s[i];
        }
        sort(up.begin(), up.end());
        sort(low.begin(), low.end());
        string ans="";
        int i=0, j=0;
        while (i<up.length() && j<low.length())
        {
            ans+=up[i];
            i++;
            ans+=low[j];
            j++;
        }
        while (j<low.length())
        {
            ans+=low[j];
            j++;
        }
        while (i<up.length())
        {
            ans+=up[i];
            i++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.stringSort (s) << endl;
    }
}

// Contributes By: Pranay Bansal
// } Driver Code Ends