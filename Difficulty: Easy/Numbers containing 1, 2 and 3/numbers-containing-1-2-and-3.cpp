//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool func(int n)
    {
        while (n)
        {
            int d=n%10;
            if (d!=1 && d!=2 && d!=3)
                return false;
            n/=10;
        }
        return true;
    }
    vector<int> filterByDigits(const vector<int>& arr)
    {
        vector<int>vec;
        for (int i=0;i<arr.size();i++)
        {
            if (func(arr[i]))
                vec.push_back(arr[i]);
        }
        return vec;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> result = ob.filterByDigits(arr);
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends