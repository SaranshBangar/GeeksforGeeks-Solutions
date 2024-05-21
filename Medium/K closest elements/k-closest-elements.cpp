//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarySearch(vector<int>& arr, int low, int high, int target)
    {
        if(arr[low] > target)    return low;
        if(arr[high] <= target)  return high;

        int mid = low + (high - low) / 2;

        if(arr[mid] <= target && arr[mid + 1] > target)
            return mid;

        if(target < arr[mid])
            return binarySearch(arr, low, mid - 1, target);

        return binarySearch(arr, mid + 1, high, target);
    }

    vector<int> printKClosest(vector<int> arr, int n, int k, int x)
    {
        int left = binarySearch(arr, 0, n-1, x);
        int right = left + 1;

        if(arr[left] == x)  left--;

        vector<int> ans;
        while(left >=0 && right < n && k) {
            if(x - arr[left] < arr[right] - x)
                ans.push_back(arr[left--]);
            else
                ans.push_back(arr[right++]);
            k--;
        }
        while(left >=0 && k)
            ans.push_back(arr[left--]), k--;
        while(right < n && k)
            ans.push_back(arr[right++]), k--;

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends