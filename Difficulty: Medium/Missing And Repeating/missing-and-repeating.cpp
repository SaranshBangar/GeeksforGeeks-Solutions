//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        vector<int>vec(n, 0);
        for (int i=0;i<n;i++)
            vec[arr[i]-1]++;
        vector<int>ans(2, 0);
        for (int i=0;i<n;i++)
        {
            if (vec[i]==0)
                ans[1]=i+1;
            if (vec[i]==2)
                ans[0]=i+1;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends