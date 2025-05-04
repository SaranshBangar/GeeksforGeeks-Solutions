//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {
        int flr=INT_MIN, cil=INT_MAX;
        for (int i=0;i<arr.size();i++)
        {
            if (arr[i]<=x && flr<=arr[i])
                flr=arr[i];
            if (arr[i]>=x && cil>=arr[i])
                cil=arr[i];
        }
        if (flr==INT_MIN)
            flr=-1;
        if (cil==INT_MAX)
            cil=-1;
        return {flr, cil};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends