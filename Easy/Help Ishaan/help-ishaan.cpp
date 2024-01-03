//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    bool func(int N)
	    {
	        for (int i=2;i<=sqrt(N);i++)
	        {
	            if (N%i==0)
	                return false;
	        }
	        return true;
	    }
		int NthTerm(int N)
		{
		    if (N==1)
		        return 1;
	        else if (N==2)
	            return 0;
            int count=0;
            while (true)
            {
                if (N-count>1 && func(N-count))
                    return count;
                else if (func(N+count))
                    return count;
                else count++;
            }
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends