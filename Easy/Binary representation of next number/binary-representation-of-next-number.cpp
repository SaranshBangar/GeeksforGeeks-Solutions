//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string removeLeadingZeros(string s)
    {
        for(int i=0; i<s.size(); i++)
            if(s[i] == '1')
                return s.substr(i);
        return "0";
    }

    string binaryNextNumber(string s)
    {
        string ans = "1";
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '0')
            {
                s[i] = '1';
                return removeLeadingZeros(s);
            }
            else s[i] = '0';
        }
        for(int i=0; i<s.size(); i++)
            ans += '0';
        return removeLeadingZeros(ans);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends