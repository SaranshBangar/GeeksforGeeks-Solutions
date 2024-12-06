//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations)
    {
        sort(citations.begin(), citations.end());
        int n=citations.size();
        int low=0, high=n-1;
        int hindex=0;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if (citations[mid]>=(n-mid))
            {
                hindex=n-mid;
                high=mid-1;
            } 
            else low=mid+1;
        }
        return hindex;
    }
};

//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.hIndex(arr);

        cout << result << endl;

        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends