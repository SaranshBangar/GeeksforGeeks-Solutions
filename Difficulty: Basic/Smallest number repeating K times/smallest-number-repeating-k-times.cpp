//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        unordered_map<int, int>mp;
        for (int i=0;i<N;i++)
            mp[arr[i]]++;
        int ans=INT_MAX;
        for (auto i=mp.begin();i!=mp.end();i++)
        {
            if (i->second==K)
            {
                if (ans>i->first)
                    ans=i->first;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}

// } Driver Code Ends