//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findUnique(int k, vector<int>& arr)
    {
        unordered_map<int, int>mp;
        for (int i=0;i<arr.size();i++)
            mp[arr[i]]++;
        for (auto i=mp.begin();i!=mp.end();i++)
        {
            if (i->second!=k)
                return i->first;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after the number of test cases
    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after k
        string inputLine;
        getline(cin, inputLine);
        stringstream ss(inputLine);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        cout << obj.findUnique(k, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends