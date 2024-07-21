//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            unordered_map<char, int>mp;
            int count=0;
            for (int i=0;i<S.length();i++)
            {
                mp[S[i]]++;
                while (i<S.length()-1 && S[i]==S[i+1])
                    i++;
            }
            for (auto i=mp.begin();i!=mp.end();i++)
            {
                if (i->second==N)
                    count++;
            }
            return count;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends