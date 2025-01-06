//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target)
    {
        vector<int> ans;
        sort(arr.begin(), arr.end());
        int low=0, high=arr.size()-1;
        int diff=INT_MAX;
        int maxAbsDiff=INT_MIN;
        while (low<high)
        {
            int sum=arr[low]+arr[high];
            int currentDiff=abs(target-sum);
            int currentAbsDiff=abs(arr[low]-arr[high]);
            if (currentDiff<diff || (currentDiff==diff && currentAbsDiff>maxAbsDiff))
            {
                diff=currentDiff;
                maxAbsDiff=currentAbsDiff;
                ans={arr[low], arr[high]};
            }
            if (sum<target)
                low++;
            else high--;
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
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends