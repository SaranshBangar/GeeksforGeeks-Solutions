//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int n=arr.size();
        if (n<2)
            return -1;
        int max_=INT_MIN;
        int sec_max=INT_MIN;
        for (int i=0;i<n;i++)
        {
            if (arr[i]>max_)
            {
                sec_max=max_;
                max_=arr[i];
            }
            else if (arr[i]>sec_max && arr[i]!=max_)
                sec_max=arr[i];
        }
        if (max_==sec_max || sec_max==INT_MIN)
            return -1;
        else return sec_max;
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
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends