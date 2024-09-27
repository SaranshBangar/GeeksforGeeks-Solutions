//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) 
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
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends