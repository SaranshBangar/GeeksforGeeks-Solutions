//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& v)
    {
        long long total_sum = 0;
        for (int i = 0; i < v.size(); i++) 
            total_sum += v[i];
        if (total_sum % 3 != 0)
            return {-1,-1};
        long long part_sum = total_sum / 3;
        long long two_part_sum = 2 * part_sum;
        long long prefix_sum = 0, count = -1, ways = 0;
        for (int i = 0; i < v.size(); i++)
        {
            prefix_sum += v[i];
            if (prefix_sum == two_part_sum && count!=-1)
                return {i,count};
            if (prefix_sum == part_sum)
                count=i;
        }
        return {-1,-1};
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
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends