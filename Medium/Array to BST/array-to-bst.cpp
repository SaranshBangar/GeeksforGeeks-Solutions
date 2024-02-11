//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int>sortedArrayToBST(vector<int>&nums)
    {
        vector<int> result;
        if (nums.empty())
            return result;
        generatePreorder(nums, 0, nums.size()-1, result);
        return result;
    }
    void generatePreorder(vector<int>&nums, int start, int end, vector<int>&result)
    {
        if (start>end)
            return;
        int mid=start+(end-start)/2;
        result.push_back(nums[mid]);
        generatePreorder(nums, start, mid-1, result);
        generatePreorder(nums, mid+1, end, result);
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends