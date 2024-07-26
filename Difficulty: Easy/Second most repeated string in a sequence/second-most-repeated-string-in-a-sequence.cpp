//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string, int>mp;
        for (int i=0;i<n;i++)
            mp[arr[i]]++;
        vector<pair<string, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b)
        {
            return a.second>b.second;
        });
        return vec[1].first;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends