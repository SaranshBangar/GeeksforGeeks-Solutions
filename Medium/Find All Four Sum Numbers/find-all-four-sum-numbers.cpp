//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k)
    {
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        int size=arr.size();
        for (int i=0;i<size-3;i++)
        {
            int newK=k-arr[i];
            for (int j=i+1;j<size-2;j++)
            {
                int newNewK=newK-arr[j];
                int low=j+1, high=size-1;
                while (low<high)
                {
                    if (arr[low]+arr[high]==newNewK)
                    {
                        ans.push_back({arr[i], arr[j], arr[low], arr[high]});
                        while (low<high && arr[low]==arr[low+1])
                            low++;
                        while (low<high && arr[high]==arr[high-1])
                            high--;
                        low++;
                        high--;
                    }
                    else if (arr[low]+arr[high]>newNewK)
                        high--;
                    else low++;
                }
                while (j<size-2 && arr[j]==arr[j+1])
                    j++;
            }
            while (i<size-3 && arr[i]==arr[i+1])
                i++;
        }
        // ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends