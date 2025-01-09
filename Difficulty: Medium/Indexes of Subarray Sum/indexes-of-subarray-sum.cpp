//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target)
    {
        unordered_map<int,int>mp;
        int n=arr.size();
        int sum=0;
        mp[0]=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(mp.find(sum-target)!=mp.end())
                return {mp[sum-target]+1,i+1};
            if(mp.find(sum)==mp.end())
                mp[sum]=i+1;
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends