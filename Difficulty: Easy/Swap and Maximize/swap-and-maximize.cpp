//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int min_ind=0,max_ind=n-1;
        int mx=arr[max_ind]+1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                arr[i]=(arr[min_ind++]%mx)*mx+arr[i];
            else arr[i]=(arr[max_ind--]%mx)*mx+arr[i];
        }
        for(int i=0;i<n;i++)
            arr[i]/=mx;
        long long ans=0;
        for(int i=0;i<n;i++)
            ans+=abs(arr[i]-arr[(i+1)%n]);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends