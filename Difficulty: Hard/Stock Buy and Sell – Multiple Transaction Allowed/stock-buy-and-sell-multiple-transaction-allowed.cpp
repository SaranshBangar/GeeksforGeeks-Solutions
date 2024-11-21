//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices)
    {
        int n=prices.size(), min_=prices[0], max_=prices[0];
        int res=0;
        int i=0;
        while (i<n-1)
        {
            while (i<n-1 && prices[i]>=prices[i+1])
                i++;
            min_=prices[i];
            while (i<n-1 && prices[i]<=prices[i+1])
                i++;
            max_=prices[i];
            res=res+(max_-min_);
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends