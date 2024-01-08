//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	long long int sumofproduct(int n)
	{
	    long long int ans=0;
	    int help=n;
	    while (help>=0)
	    {
	        double i=static_cast<double>(n)/help;
	        ans+=(help*static_cast<long long int>(i));
	        help--;
	    }
	    return ans;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.sumofproduct(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends