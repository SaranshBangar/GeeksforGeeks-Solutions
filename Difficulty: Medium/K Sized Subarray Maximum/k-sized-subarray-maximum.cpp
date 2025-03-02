//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k)
    {
        int n=arr.size();
        vector<int>vec;
        if (n<k)
            return vec;
        int ans=INT_MIN;;
        for (int i=0;i<k;i++)
        {
            if (ans<arr[i])
                ans=arr[i];
        }
        vec.push_back(ans);
        for (int i=k;i<n;i++)
        {
            if (arr[i-k]==ans)
            {
                ans=INT_MIN;
                for (int j=i-k+1;j<=i;j++)
                {
                    if (ans<arr[j])
                        ans=arr[j];
                }
            }
            ans = max(ans, arr[i]);
            vec.push_back(ans);
        }
        return vec;
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

        Solution obj;
        vector<int> res = obj.maxOfSubarrays(arr, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends