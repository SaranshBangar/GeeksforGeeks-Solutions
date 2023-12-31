//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k)
    {
        if (nums.size()%2!=0)
            return false;
        unordered_map<int, int> remFreq;
        for (int num:nums)
        {
            int rem=(num%k+k)%k;
            remFreq[rem]++;
        }
        for (auto it : remFreq)
        {
            int rem=it.first;
            int fre=it.second;
            if (rem==0)
            {
                if (fre%2!=0)
                    return false;
            }
            else
            {
                if (remFreq[rem]!=remFreq[k-rem])
                    return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends