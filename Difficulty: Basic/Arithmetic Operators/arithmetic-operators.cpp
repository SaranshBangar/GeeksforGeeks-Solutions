//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

void operations(int x, int y) {
    // Perform addition x+y below
    int p =x+y;
    // Perform subtraction x-y below
    int q =x-y;
        // Perform multiplication x*y below
    int r =x*y;
        // Perform division x/y below
    int s =x/y;
        // Perform modulo operation x%y below
    int t =x%y;

    // The below code prints the output. Don't change it!
    cout << p << " " << q << " " << r << " " << s << " " << t << endl;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        operations(x, y);

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends