//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int>func(string s)
    {
        int n=s.length();
        vector<int>lps(n);
        lps[0]=0;
        int l=0, i=1;
        while (i<n)
        {
            if (s[i]==s[l])
            {
                l++;
                lps[i]=l;
                i++;
            }
            else if (s[i]!=s[l])
            {
                if (l!=0)
                    l=lps[l-1];
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
    int minChar(string &s)
    {
        int n=s.length();
        string rev=s;
        reverse(rev.begin(), rev.end());
        s=s+" "+rev;
        vector<int>lps=func(s);
        return (n-lps.back());
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends