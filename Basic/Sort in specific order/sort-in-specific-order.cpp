//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        vector<long long>even, odd;
        for (long long i=0;i<n;i++)
        {
            if (arr[i]%2==0)
                even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end());
        int os=odd.size(), es=even.size();
        for (long long i=0;i<os;i++)
            arr[i]=odd[i];
        for (long long i=os;i<es+os;i++)
            arr[i]=even[i-os];
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends