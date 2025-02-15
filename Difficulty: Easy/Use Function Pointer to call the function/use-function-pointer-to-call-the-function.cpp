//{ Driver Code Starts
// Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
// User function Template for C++
int multiply(int a, int b) {
    return a * b;
}

int multiplyUsingfunPointer(int a, int b)
{
    return multiply(a, b);
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << multiplyUsingfunPointer(a, b) << endl;
    }
    return 0;
}

// } Driver Code Ends