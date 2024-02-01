//{ Driver Code Starts


#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends



class Solution{
  public:
    void customSort(int arr[], int n)
    {
        sort(arr, arr+n/2);
        sort(arr+n/2, arr+n, greater<int>());
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
        obj.customSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends