//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& x)
    {
        stack<char> s;
        for (char c : x)
        {
            if (c=='(' || c=='{' || c=='[')
                s.push(c);
            else
            {
                if (s.empty())
                    return false;
                char top=s.top();
                s.pop();
                if ((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='['))
                    return false;
            }
        }
        return s.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends