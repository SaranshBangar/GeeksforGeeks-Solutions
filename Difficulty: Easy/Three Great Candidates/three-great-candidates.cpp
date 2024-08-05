//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long maxProduct(vector<int> arr)
    {
        int n1=INT_MIN, n2=INT_MIN, n3=INT_MIN;
        int n1_neg=INT_MAX, n2_neg=INT_MAX;
        for (int num : arr) 
        {
            if (num>n1)
            {
                n3=n2;
                n2=n1;
                n1=num;
            }
            else if (num>n2)
            {
                n3=n2;
                n2=num;
            } 
            else if (num>n3)
                n3=num;
            if (num<n1_neg) 
            {
                n2_neg=n1_neg;
                n1_neg=num;
            } 
            else if (num<n2_neg)
                n2_neg=num;
        }
        long long ans1=(long long)n1*n2*n3;
        long long ans2=(long long)n1_neg*n2_neg*n1;
        return max(ans1, ans2);
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends