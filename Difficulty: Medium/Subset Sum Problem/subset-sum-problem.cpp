//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum)
    {
        int n=arr.size();
        vector<bool> prev(sum+1,false);
        vector<bool> curr(sum+1,false);
        prev[0]=true;
        for(int ind=1;ind<=n;ind++)
        {
            for(int s=0;s<=sum;s++)
            {
                if(s==0)
                {
                    curr[s]=true;
                    continue;
                }
                bool notTake=prev[s];
                bool take=false;
                if(s>=arr[ind-1])
                    take=prev[s-arr[ind-1]];
                bool ans=take|notTake;
                curr[s]=ans;
            }
            prev=curr;
        }
        return prev[sum];
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends