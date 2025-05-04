//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

void rightShift(int a, int b)
{
    int ans=a>>b;
    cout<<ans<<endl;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        rightShift(a, b);

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends