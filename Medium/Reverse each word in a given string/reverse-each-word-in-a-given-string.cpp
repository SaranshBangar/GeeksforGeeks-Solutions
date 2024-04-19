//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string func(string s)
    {
        reverse(s.begin(), s.end());
        return s;
    }
    string reverseWords (string s)
    {
        string ans="", temp="";
        for (int i=0;i<s.length();i++)
        {
            if (s[i]!='.')
                temp+=s[i];
            else
            {
                ans+=func(temp);
                ans+='.';
                temp="";
            }
        }
        ans+=func(temp);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends