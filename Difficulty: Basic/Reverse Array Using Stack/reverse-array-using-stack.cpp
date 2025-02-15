//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr)
    {
        stack<int>st;
        for (int i=0;i<arr.size();i++)
            st.push(arr[i]);
        int i=0;
        while (!st.empty())
        {
            arr[i]=st.top();
            st.pop();
            i++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        obj.reverseArray(arr);

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends