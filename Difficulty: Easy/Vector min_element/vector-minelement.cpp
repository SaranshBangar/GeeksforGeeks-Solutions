//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
int vMin(vector<int>& arr)
{
    int ans=INT_MAX;
    for (int i=0;i<arr.size();i++)
    {
        if (ans>arr[i])
            ans=arr[i];
    }
    return ans;
}

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        cout << vMin(arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends