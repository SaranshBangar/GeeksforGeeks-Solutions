//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr)
    {
        if (arr.empty())
            return 0;
        unordered_set<int>nums(arr.begin(), arr.end());
        int ans=0;
        for (int num:nums)
        {
            if (nums.find(num-1)==nums.end())
            {
                int curr=num;
                int currs=1;
                while (nums.find(curr+1)!=nums.end())
                {
                    curr++;
                    currs++;
                }
                ans=max(ans, currs);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
