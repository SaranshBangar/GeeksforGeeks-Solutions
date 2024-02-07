//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int low=0, high=n-1, temp=-1;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if (a[mid]==1)
            {
                temp=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return temp;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends