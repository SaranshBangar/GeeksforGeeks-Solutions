//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr)
    {
        int big=INT_MIN, big2=INT_MIN;
        for (int i=0;i<arr.size();i++)
        {
            if (big2<arr[i])
            {
                if (big<arr[i])
                {
                    big2=big;
                    big=arr[i];
                }
                else big2=arr[i];
            }
        }
        return big*big2;
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
        Solution obj;
        int res = obj.maxProduct(arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends