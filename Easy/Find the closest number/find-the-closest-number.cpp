//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int target) 
    {
        if (target>arr[n-1])
            return arr[n-1];
        if (target<arr[0])
            return arr[0];
        int low=0, high=n-1, ans1, ans2, ans;
        while (low<=high)
        {
            int mid=low+((high-low)/2);
            if (arr[mid]==target)
                return arr[mid];
            else if (arr[mid]>target)
            {
                ans1=abs(arr[mid]-target);
                high=mid-1;
            }
            else
            {
                ans2=abs(arr[mid]-target);
                low=mid+1;
            }
        }
        if (ans1>ans2)
            ans=arr[high];
        else ans=arr[low];
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
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends