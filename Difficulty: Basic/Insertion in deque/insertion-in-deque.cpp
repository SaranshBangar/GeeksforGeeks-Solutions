//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to insert all elements of the array in deque.
    deque<int> insertInDq(vector<int>& arr)
    {
        deque<int>dq;
        for (int i=0;i<arr.size();i++)
            dq.push_back(arr[i]);
        return dq;
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
        Solution ob;
        deque<int> dq = ob.insertInDq(arr);
        for (auto itr = dq.begin(); itr != dq.end(); itr++) {
            // printing the elements.
            cout << *itr << " ";
        }
        cout << endl;
        cout << "~\n";
    }
}
// } Driver Code Ends
