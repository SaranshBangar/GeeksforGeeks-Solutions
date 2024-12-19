//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k)
    {
        int n=arr.size(), missingCount=0, current=1;
        for (int i=0;i<n;i++)
        {
            while (current<arr[i])
            {
                missingCount++;
                if (missingCount==k)
                    return current;
                current++;
            }
            current=arr[i]+1;
        }
        while (missingCount<k) 
        {
            missingCount++;
            if (missingCount==k)
                return current;
            current++;
        }
        return -1; 
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.kthMissing(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends