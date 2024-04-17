//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int merge(int store[], int start, int mid, int end)
    {
        vector<int> temp;
        int cnt = 0;
        int l = start, r = mid + 1;
        while(l <= mid && r <= end)
        {
            if (store[l] <= store[r])
            {
                temp.push_back(store[l]);
                l ++;
            }
            else
            {
                cnt += (mid - l + 1);
                temp.push_back(store[r]);
                r ++;
            }
        }
        
        while (l <= mid)
        {
            temp.push_back(store[l]);
            l ++;
        } 
        
        while (r <= end)
        {
            temp.push_back(store[r]);
            r ++;
        }
        
        for (int i = start; i <= end; i++)
            store[i] = temp[i - start];
            
        return cnt;
    }
    int mergeSort(int store[], int start, int end)
    {
        int cnt = 0;
        if (start >= end) return 0;
        
        int mid = start + (end - start) / 2;
        
        cnt += mergeSort(store, start, mid);
        cnt += mergeSort(store, mid + 1, end);
        cnt += merge(store, start, mid, end);
        
        return cnt;
    }
    public:
    int countPairs(int arr[] , int n )
    {
        for (int i = 0; i < n; i++)
            arr[i] *= i;
        
        return mergeSort(arr, 0, n - 1);
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends