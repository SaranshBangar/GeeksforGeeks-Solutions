//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar)
    {
        int n=arr.size();
        int prefixSum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            if(mp.find(prefixSum-tar)!=mp.end())
                ans+=mp[prefixSum-tar];
            mp[prefixSum]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int tar = stoi(ks);
        Solution obj;
        int res = obj.subArraySum(arr, tar);
        cout << res << endl;
    }
    return 0;
}
// } Driver Code Ends