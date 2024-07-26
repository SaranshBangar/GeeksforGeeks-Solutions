//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool passed (string s)
    {
        string s1="", s2="";
        int count=0;
        if (s.length()%2==0)
            count=s.length()/2;
        else count=s.length()/2+1;
        for (int i=0;i<s.length()/2;i++)
            s1+=s[i];
        for (int i=count;i<s.length();i++)
            s2+=s[i];
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1==s2;
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
        if (ob.passed (s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
// } Driver Code Ends