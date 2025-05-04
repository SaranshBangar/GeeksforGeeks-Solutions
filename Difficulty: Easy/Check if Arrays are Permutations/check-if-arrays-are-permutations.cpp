//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

// Complete this function
bool isArr2PermutationOfArr1(vector<int>& arr1, vector<int>& arr2)
{
    return is_permutation(arr1.begin(), arr1.end(), arr2.begin());
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line1, line2;
        getline(cin, line1);
        getline(cin, line2);
        stringstream ss1(line1);
        stringstream ss2(line2);
        int num;
        vector<int> arr1, arr2;
        while (ss1 >> num) {
            arr1.push_back(num);
        }
        while (ss2 >> num) {
            arr2.push_back(num);
        }

        isArr2PermutationOfArr1(arr1, arr2) ? cout << "true" : cout << "false";
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends