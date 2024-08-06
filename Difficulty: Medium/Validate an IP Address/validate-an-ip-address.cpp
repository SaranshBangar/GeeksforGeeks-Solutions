//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) 
    {
        int n = str.length();
        int count = 1;
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '.')
            {
                count++;
                if (temp.empty())
                    return 0;
                int check = stoi(temp);
                if (check > 255 || temp.length() > 3 || (temp.length()>1 && temp[0]=='0'))
                    return 0;
                else temp = "";
            }
            else temp.push_back(str[i]);
        }
        if (!temp.empty())
        {
            int check = stoi(temp);
            if (check > 255 || temp.length() > 3 || (temp.length()>1 && temp[0]=='0'))
                return 0;
        }
        if (count != 4)
           return 0;
        return 1;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends