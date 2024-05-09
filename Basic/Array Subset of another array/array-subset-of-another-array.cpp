//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

bool func(int *a1, int k, int n)
{
    int low=0, high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (a1[mid]==k)
        {
            a1[mid]=INT_MIN;
            return true;
        }
        else if (a1[mid]>k)
            high=mid-1;
        else low=mid+1;
    }
    return false;
}

string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1, a1+n);
    for (int i=0;i<m;i++)
    {
        if (!func(a1, a2[i], n))
            return "No";
        else sort(a1, a1+n);
    }
    return "Yes";
}