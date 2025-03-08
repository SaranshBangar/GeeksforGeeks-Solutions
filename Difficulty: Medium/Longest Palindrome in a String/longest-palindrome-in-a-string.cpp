//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string longestPalindrome(string &s)
    {
        int n=s.length();
        int resLen = 0;
        string res = "";
        
        for(int i=0;i<n;i++)
        {
            int l=i,r=i; 
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1 > resLen)
                {
                    resLen = r-l+1;
                    res = s.substr(l,resLen);
                }
                l--;
                r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r])
            {
                if(r-l+1 > resLen)
                {
                    resLen = r-l+1;
                    res = s.substr(l,resLen);
                }
                l--;
                r++;
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends