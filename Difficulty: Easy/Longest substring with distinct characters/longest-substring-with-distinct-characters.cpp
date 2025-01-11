//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s)
    {
        int n=s.size(), i=0, j=0, ans=0;
        vector<bool>freq(26, false);
        while(j<n)
        {
            int val=s[j]-'a';
            while(freq[val])
            {
                freq[s[i]-'a']=false;
                i++;
            }
            ans=max(ans, j-i+1);
            freq[val]=true;
            j++;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends