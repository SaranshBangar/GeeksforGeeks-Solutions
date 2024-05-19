//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    vector<int>vec(N), ans(N);
	    for (int i=0;i<N;i++)
	        vec[i]=arr[i];
        sort(vec.begin(), vec.end());
        for (int i=N-1, j=0, k=0;i>=j;i--, j++, k+=2)
        {
            ans[k]=vec[i];
            ans[k+1]=vec[j];
        }
        return ans;
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends