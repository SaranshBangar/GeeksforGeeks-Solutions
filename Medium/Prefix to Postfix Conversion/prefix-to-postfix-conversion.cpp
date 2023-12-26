//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isOperator(char c)
    {
        return (c=='+' || c=='-' || c=='*' || c=='/');
    }
    
    string preToPost(string pre_exp)
    {
        stack<string> operands;
        for (int i=pre_exp.length() - 1; i >= 0; --i)
        {
            char c=pre_exp[i];
            if (isalnum(c))
                operands.push(string(1, c));
            else if (isOperator(c))
            {
                string operand1=operands.top();
                operands.pop();
                string operand2=operands.top();
                operands.pop();
                string result=operand1 + operand2 + c;
                operands.push(result);
            }
        }
        return operands.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t=1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends