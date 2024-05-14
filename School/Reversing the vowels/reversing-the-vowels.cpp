//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            string str="";
            for (int i=0;i<s.length();i++)
            {
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                    str+=s[i];
            }
            reverse(str.begin(), str.end());
            for (int i=0, j=0;i<s.length() && j<str.length();i++)
            {
                if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    s[i]=str[j];
                    j++;
                }
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends