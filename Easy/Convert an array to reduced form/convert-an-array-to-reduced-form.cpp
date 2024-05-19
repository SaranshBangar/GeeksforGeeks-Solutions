//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	int func(int temp[], int k, int size)
	{
	    int low=0, high=size-1;
	    while (low<=high)
	    {
	        int mid=(low+high)/2;
	        if (temp[mid]==k)
	            return mid;
            else if (temp[mid]>k)
                high=mid-1;
            else low=mid+1;
	    }
	    return 0;
	}
	void convert(int arr[], int n)
	{
	    int temp[n];
	    for (int i=0;i<n;i++)
	        temp[i]=arr[i];
        sort(temp, temp+n);
        for (int i=0;i<n;i++)
            arr[i]=func(temp, arr[i], n);
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
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends