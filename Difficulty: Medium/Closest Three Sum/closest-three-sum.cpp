//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target)
    {
        int diff = INT_MAX, ans = INT_MIN;
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++) {
            int left = i+1;
            int right = arr.size() - 1;
            while(left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if(sum == target)
                    return sum;
                if(sum > target)
                    right--;
                else left++;
                if(abs(sum-target)<diff)
                {
                    diff = abs(sum - target);
                    ans = sum;
                }
                else if(abs(sum - target) == diff)
                    ans = max(ans, sum);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends