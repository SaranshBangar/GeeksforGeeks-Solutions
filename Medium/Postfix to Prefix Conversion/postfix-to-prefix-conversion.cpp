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
    
    string postToPre(string post_exp)
    {
        stack<string> operands;
        for (char c : post_exp)
        {
            if (isalnum(c))
                operands.push(string(1, c));
            else if (isOperator(c))
            {
                string operand2=operands.top();
                operands.pop();
                string operand1=operands.top();
                operands.pop();
                string result=c+operand1+operand2;
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends