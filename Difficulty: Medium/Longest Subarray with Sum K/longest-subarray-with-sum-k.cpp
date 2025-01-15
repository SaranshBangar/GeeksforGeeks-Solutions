//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k)
    {
        int sum=0;
        unordered_map<int, int>mp;
        int idx=0;
        for (int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            if (sum-k==0)
                idx=max(idx, i+1);
            else if (mp[sum-k])
                idx=max(idx, i-mp[sum-k]+1);
            if(mp[sum]==0)
                mp[sum]=i+1;
        }
        return idx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends