//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int print2largest(int arr[], int n)
	{
        if (n < 2)
            return arr[0];
            
        int max_ = INT_MIN;
        int sec_max = INT_MIN;
    
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max_)
            {
                sec_max = max_;
                max_ = arr[i];
            }
            else if (arr[i] > sec_max && arr[i] != max_)
                sec_max = arr[i];
        }
    
        if (max_ == sec_max || sec_max == INT_MIN)
            return -1;
        else return sec_max;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends