//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int func(vector<int>arr, int n)
    {
        int ans=arr[0], mx=arr[0];
        for(int i=1;i<n;i++)
        {
            mx=max(arr[i],mx+arr[i]);
            ans=max(ans,mx);
        }
        return ans;
    }
    int circularSubarraySum(vector<int> &arr)
    {
        
        int n=arr.size();
        int mxn=func(arr,n);
        if(mxn<0)
            return mxn;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int mxc=sum+func(arr,n);
        return max(mxn,mxc);
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends