//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
  public:
    vector<int> arranged(int a[],int n)
    {
        vector<int>pos, neg, ans;
	    for (int i=0;i<n;i++)
	    {
	        if (a[i]>0)
	            pos.push_back(a[i]);
            else neg.push_back(a[i]);
	    }
	    for (int i=0;i<n/2;i++)
	    {
	        ans.push_back(pos[i]);
	        ans.push_back(neg[i]);
	    }
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
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans;
    Solution obj;
    ans=obj.arranged(a,n);
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    }
}

// } Driver Code Ends