//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr)
    {
        int zero=0, one=0, i, n=arr.size();
        for (int i=0;i<n;i++)
        {
            if (arr[i]==0)
                zero++;
            else one++;
        }
        for (i=0;i<zero;i++)
        {
            arr[i]=0;
        }
        i=0;
        while(one)
        {
            arr[zero+i]=1;
            i++;
            one--;
        }
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
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends