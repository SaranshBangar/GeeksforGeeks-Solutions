//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int maxXor(vector<int> &arr)
    {
        int maxXor = 0, mask=0;
        for(int i=31;i>=0;i--){
            mask|=(1<<i);
            unordered_set<int> us;
            for(auto z : arr)
                us.insert(mask&z);
            
            int temp = maxXor|(1<<i);
            for(auto p : us){
                int t = temp^p;
                if(us.find(t) != us.end()){
                    maxXor = temp;
                    break;
                }
            }
            
        }
        return maxXor;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        Solution ob;
        cout << ob.maxXor(arr) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends