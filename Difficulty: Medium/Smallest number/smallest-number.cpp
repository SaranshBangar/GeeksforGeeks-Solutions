//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d)
    {
        if(s > 9*d)
            return "-1";
        string ans = "";
        while(d--)
        {
            ans = s <= 9 ? to_string(s) + ans : "9" + ans;
            s = s - 9 < 0 ? 0 : s - 9;
        }
        for(int i=ans.size()-2; i>=0; i--)
        {
            if(ans[i] == '0')
            {
                ans[i] = '1';
                ans = ans.substr(0, i+1) + to_string(ans[i+1] - '0' - 1) + ans.substr(i+2);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends