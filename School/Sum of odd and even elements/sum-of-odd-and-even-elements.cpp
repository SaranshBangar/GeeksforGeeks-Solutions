//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int n)
		{
		    vector<int>ans;
		    int odd=0, even=0;
		    for (int i=1;i<=n;i++)
		    {
		        if (i%2==0)
		            even+=i;
	            else odd+=i;
		    }
		    ans.push_back(odd);
		    ans.push_back(even);
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}
// } Driver Code Ends