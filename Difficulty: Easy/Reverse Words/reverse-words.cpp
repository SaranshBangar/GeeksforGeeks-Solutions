//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str)
    {
        vector<string>words;
        string help="";
        for (int i=0;i<str.length();i++)
        {
            if (str[i]=='.')
            {
                words.push_back(help);
                help="";
            }
            else help+=str[i];
        }
        words.push_back(help);
        string result="";
        for (int i=words.size()-1;i>=0;i--)
        {
            result+=words[i];
            if (i!=0)
                result+=".";
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends