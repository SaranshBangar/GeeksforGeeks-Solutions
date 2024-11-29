//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2)
    {
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        string ans="";
        int n=0;
        int sl1=s1.length(), sl2=s2.length();
        for (int i=0;i<max(sl1, sl2);i++)
        {
            int bit1=(i<sl1 && s1[i]=='1') ? 1 : 0;
            int bit2=(i<sl2 && s2[i]=='1') ? 1 : 0;
            int sum=bit1+bit2+n;
            ans+=(sum%2==0) ? '0' : '1';
            n=sum/2;
        }
        if (n)
            ans+='1';
        while (ans[ans.length()-1]=='0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends