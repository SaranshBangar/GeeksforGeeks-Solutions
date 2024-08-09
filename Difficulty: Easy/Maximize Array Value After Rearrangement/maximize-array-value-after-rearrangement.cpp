//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int Maximize(vector<int> &arr) 
    {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        long long i=0, count=0;
        while (i<n)
        {
            count+=arr[i]*i;
            i++;
        }
        count=count%(long long)(pow(10,9)+7);
        return count;
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
        //  cin.ignore();
        int n = arr.size();
        Solution ob;
        cout << ob.Maximize(arr) << endl;
    }
}
// } Driver Code Ends