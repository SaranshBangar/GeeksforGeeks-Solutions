//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x)
    {
        vector<int>ans;
        int low=0, high=n-1, temp=-1;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if (arr[mid]==x)
            {
                temp=mid;
                high=mid-1;
            }
            else if (arr[mid]>x)
                high=mid-1;
            else low=mid+1;
        }
        ans.push_back(temp);
        if (temp==-1)
            return ans;
        low=temp;
        high=n-1;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if (arr[mid]==x)
            {
                temp=mid;
                low=mid+1;
            }
            else if (arr[mid]>x)
                high=mid-1;
            else low=mid+1;
        }
        ans.push_back(temp);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends