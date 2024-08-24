//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int solve(int W,vector<int>& wt,vector<int>& val,int sum,int& n,int i)
    {
        if(i>=n)
            return sum;
        if(W-wt[i]>=0)
        {
            int taken = solve(W-wt[i],wt,val,sum+val[i],n,i+1);
            int notTaken = solve(W,wt,val,sum,n,i+1);
            return max(taken,notTaken);
        }
        else
        {
            int notTaken = solve(W,wt,val,sum,n,i+1);
            return max(sum,notTaken);
        }
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val)
    {
        int sum = 0;
        int n = wt.size();
        int taken = solve(W,wt,val,sum,n,0);
        int notTaken = solve(W,wt,val,sum,n,1);
        return max(taken,notTaken);
    }
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends