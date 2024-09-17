//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k)
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<k)
                continue;
            int MIN=min(arr[0]+k, arr[i]-k);
            int MAX=max(arr[n-1]-k, arr[i-1]+k);
            ans=min(ans, MAX-MIN);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends