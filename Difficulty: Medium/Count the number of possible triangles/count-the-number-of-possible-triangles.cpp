//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int i=2;i<arr.size();i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                int mn=arr[i]-arr[j];
                int ind=lower_bound(arr.begin(),arr.begin()+j+1,mn+1)-arr.begin();
                if(ind<j)
                ans+=(j-ind);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends