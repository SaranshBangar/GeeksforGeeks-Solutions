//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n)
   	{
   	    vector<bool>func(n+1, true);
        func[0]=func[1]=false;
        for (int i=2;i<=sqrt(n);i++)
        {
            if (func[i])
            {
                for (int j=i*i;j<=n;j+=i)
                    func[j]=false;
            }
        }
        long long ans=0;
        for (int i=2;i<=n;i++)
        {
            if (func[i])
                ans+=i;
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends