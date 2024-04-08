//{ Driver Code Starts
// C++ program for pendulum arrangement of numbers
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Returns pendulam arrangement of arr[]
vector<int> pendulumArrangement(int arr[], int n)
{
    sort(arr, arr+n);
    list<int>l;
    for (int i=0;i<n;i++)
    {
        if (i%2==0)
            l.push_front(arr[i]);
        else l.push_back(arr[i]);
    }
    vector<int>vec(l.begin(), l.end());
    return vec;
}


//{ Driver Code Starts.

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = pendulumArrangement(arr, n);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends