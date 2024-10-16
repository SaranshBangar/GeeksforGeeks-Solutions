//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool checkSorted(vector<int> &arr)
    {
        int cnt=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            while(arr[i]!=arr[arr[i]-1])
            {
                swap(arr[i],arr[arr[i]-1]);
                cnt++;
            }
        }
        return cnt==2 or cnt==0;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        bool ans = ob.checkSorted(arr);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends