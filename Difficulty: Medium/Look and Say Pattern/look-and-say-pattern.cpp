//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string countAndSay(int n)
    {
        string prev = "1";
        string ans = "";
        
        for(int i = 2; i <= n; i++)
        {
            int j = 0;
            int prev_size = prev.size();
            
            while(j < prev_size)
            {
                char present_char = prev[j];
                int cnt = 1;
                j++;
                while(prev[j]==present_char)
                    cnt++,j++;
                ans += to_string(cnt);
                ans += present_char;
            }
            prev = ans;
            ans = "";
        }
        
        return prev;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.countAndSay(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends