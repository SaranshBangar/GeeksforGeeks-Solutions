//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int n, int sum);
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int arr[n];  //array of size n
            
        for(int i = 0; i < n; i++)
            cin>>arr[i]; //Input the array
             
        int sum; 
        cin>>sum;
          
        cout<< sumExists(arr, n, sum) <<endl;    
            
	}
}
// } Driver Code Ends


//User function Template for C++

int sumExists(int arr[], int n, int sum)
{
    sort(arr, arr+n);
    int low=0, high=n-1;
    while (low<high)
    {
        if (arr[low]+arr[high]==sum)
            return 1;
        else if (arr[low]+arr[high]>sum)
            high--;
        else low++;
    }
    return 0;
}