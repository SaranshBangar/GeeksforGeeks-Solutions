//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums)
   	{
   	    vector<int> digitCount(10, 0);
        for (int num:nums)
        {
            while (num!=0)
            {
                digitCount[num % 10]++;
                num/=10;
            }
        }
        vector<int> result;
        for (int i=0;i<10;i++)
        {
            if (digitCount[i]>0)
                result.push_back(i);
        }
        return result;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends