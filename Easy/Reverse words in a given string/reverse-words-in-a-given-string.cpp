//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverseWords(string S) 
    { 
        vector<string>words;
        string help="";
        for (int i=0;i<S.length();i++)
        {
            if (S[i]=='.')
            {
                words.push_back(help);
                help="";
            }
            else help+=S[i];
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
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends