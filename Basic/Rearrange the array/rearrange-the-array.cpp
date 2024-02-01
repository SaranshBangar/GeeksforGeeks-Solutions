//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



// } Driver Code Ends

class Solution{
  public:
    void rearrangeArray(int arr[], int n)
    {
        int big[n], small[n];
        for (int i=0;i<n;i++)
        {
            big[i]=arr[i];
            small[i]=arr[i];
        }
        sort(big, big+n, greater<int>());
        sort(small, small+n);
        for (int i=0, k=0;i<n;i+=2, k++)
        {
            arr[i]=small[k];
            arr[i+1]=big[k];
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends