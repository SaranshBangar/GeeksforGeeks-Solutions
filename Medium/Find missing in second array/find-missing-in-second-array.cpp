//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	bool func(int a[], int b[], int k, int m)
	{
	    int low=0, high=m-1;
	    while (low<=high)
	    {
	        int mid=low+((high-low)/2);
	        if (b[mid]==a[k])
	            return true;
            else if (b[mid]>a[k])
                high=mid-1;
            else low=mid+1;
	    }
	    return false;
	}
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    sort(b, b+m);
	    vector<int>vec;
	    for (int i=0;i<n;i++)
	    {
	        if (!func(a, b, i, m))
	            vec.push_back(a[i]);
	    }
	    return vec;
	} 
};
	

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int m;
        cin>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<int> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends