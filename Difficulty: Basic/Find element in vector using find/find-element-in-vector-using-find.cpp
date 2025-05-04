//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function

bool vExists(vector<int> v, int x)
{
    auto it = find(v.begin(), v.end(), x);
    return (it!=v.end());
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> v;
        string line, line2;
        getline(cin, line);
        getline(cin, line2);
        stringstream ss(line);
        stringstream ss1(line2);
        int num, x;
        while (ss >> num) {
            v.push_back(num);
        }
        while (ss1 >> num) {
            x = num;
        }

        if (vExists(v, x))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends