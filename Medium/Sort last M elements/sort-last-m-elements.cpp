//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void sortLastMelements(vector<int>&nums, int n, int m)
    {
        vector<int>help;
        for (int i=n;i<n+m;i++)
        {
            help.push_back(nums[i]);
        }
        sort(help.begin(), help.end());
        for (int i=n, j=0;i<n+m && j<help.size();i++, j++)
        {
            nums[i]=help[j];
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n+m);
		for(auto &i: nums)
			cin >> i;
		Solution obj;
		obj.sortLastMelements(nums, n, m);
		for(auto i: nums)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends