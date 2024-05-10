//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    vector<vector<int>> ans;

    void solve(int idx, vector<int> &arr, long long sum, int currSum, vector<int> temp) {
        int n = arr.size();

        if(currSum == sum) {
            ans.push_back(temp);
            return;
        }

        if(idx >= n || currSum >= sum)
            return;

        temp.push_back(arr[idx]);
        solve(idx + 1, arr, sum, currSum + arr[idx], temp);
        temp.pop_back();

        while(idx + 1 < n && arr[idx] == arr[idx + 1])
            idx++;

        solve(idx + 1, arr, sum, currSum, temp);
    }

    vector<vector<int>> CombinationSum2(vector<int> arr, int n, int sum) {
        sort(arr.begin(), arr.end());
        ans.clear();
        solve(0, arr, sum, 0, vector<int>());
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends